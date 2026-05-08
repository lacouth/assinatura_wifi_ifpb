#include <Arduino.h>
#include <algorithm>
#include <WiFi.h>
#include <rom/crc.h>
#include <NimBLEDevice.h>
#include <math.h>
#include "XGBClassifier05U.h"
#include "XGBClassifier10U.h"
#include "RandomForest05U.h"
#include "RandomForest10U.h"

/* ----------------------- CONFIGURAÇÕES ----------------------- */
#define MACS05 (sizeof(macHashList05) / sizeof(macHashList05[0]))
#define MACS10 (sizeof(macHashList10) / sizeof(macHashList10[0]))
#define RSSI_PADRAO -100

#define SERVICE_UUID        "19b10000-e8f2-537e-4f6c-d104768a1213"
#define CHARACTERISTIC_TX   "19b10000-e8f2-537e-4f6c-d104768a1214"
#define CHARACTERISTIC_RX   "19b10000-e8f2-537e-4f6c-d104768a1215"

Eloquent::ML::Port::XGBClassifier05U XGB05;
Eloquent::ML::Port::XGBClassifier10U XGB10;
Eloquent::ML::Port::RandomForest05U RF05;
Eloquent::ML::Port::RandomForest10U RF10;

NimBLECharacteristic* pTxCharacteristic;
NimBLECharacteristic* pRxCharacteristic;
bool deviceConnected = false;

/* ----------------- LISTA DE MACS CONHECIDOS ------------------ */

uint32_t macHashList05[] = {
  0xC133E933, 0x2F3D881F, 0x361FBAED, 0xD811DBC1, 0x4EF05FFF, 
  0xA0FE3ED3, 0x2D414D63, 0xC34F2C4F, 0x0AA9BDE5, 0xE4A7DCC9, 
  0x47705924, 0xA97E3808, 0x1AE520DF, 0xF4EB41F3, 0xBF082D99, 
  0x51064CB5, 0xC9D46C09, 0x27DA0D25, 0x5AF0917B, 0xB4FEF057, 
  0x0E59C162, 0xE057A04E, 0x22608A00, 0xCC6EEB2C, 0x80FDF44F, 
  0x6EF39563, 0xABD0A78C, 0x45DEC6A0, 0xAA256287, 0x442B03AB, 
  0x0407B1BC, 0xEA09D090, 0xC06196C0, 0x2E6FF7EC, 0x16B73528, 
  0xF8B95404, 0x3AC41145, 0xD4CA7069, 0x812635E3, 0x6F2854CF, 
  0xE0AD1FD9, 0x0EA37EF5, 0x7F0CD1C6, 0x9102B0EA, 
};

uint32_t macHashList10[] = {
  0xC133E933, 0x2F3D881F, 0x361FBAED, 0xD811DBC1, 0xA6C8B6C3, 
  0x48C6D7EF, 0x4EF05FFF, 0xA0FE3ED3, 0x2D414D63, 0xC34F2C4F, 
  0xCDECC7DF, 0x23E2A6F3, 0x0AA9BDE5, 0xE4A7DCC9, 0x47705924, 
  0xA97E3808, 0x1AE520DF, 0xF4EB41F3, 0xBF082D99, 0x51064CB5, 
  0xC9D46C09, 0x27DA0D25, 0x5AF0917B, 0xB4FEF057, 0x0E59C162, 
  0xE057A04E, 0x22608A00, 0xCC6EEB2C, 0x80FDF44F, 0x6EF39563, 
  0xABD0A78C, 0x45DEC6A0, 0x12C174B5, 0xFCCF1599, 0xAA256287, 
  0x442B03AB, 0x0407B1BC, 0xEA09D090, 0xC06196C0, 0x2E6FF7EC, 
  0x16B73528, 0xF8B95404, 0x3AC41145, 0xD4CA7069, 0x812635E3, 
  0x6F2854CF, 0xE0AD1FD9, 0x0EA37EF5, 0x7F0CD1C6, 0x9102B0EA, 
};


/* ---------- CALLBACKS DE CONEXÃO ---------- */
uint16_t connHandle;

class ServerCallbacks : public NimBLEServerCallbacks {

  void onConnect(NimBLEServer* pServer, NimBLEConnInfo& connInfo) override {

    deviceConnected = true;
    connHandle = connInfo.getConnHandle();

    Serial.println(">>> CONECTOU <<<");
  }

  void onDisconnect(NimBLEServer* pServer, NimBLEConnInfo& connInfo, int reason) override {

    deviceConnected = false;

    Serial.println(">>> DESCONECTOU <<<");

    NimBLEDevice::startAdvertising();
  }
};

void enviardados(const String &ambiente) {

  if (!deviceConnected || !pTxCharacteristic) return;

  pTxCharacteristic->setValue(
    (uint8_t*)ambiente.c_str(),
    ambiente.length()
  );

  bool ok = pTxCharacteristic->notify(connHandle);

  if (!ok) {
    Serial.print("BUFFER CHEIO -> ");
    delay(120);
    pTxCharacteristic->notify(connHandle);
  }

  Serial.print("NOTIFY -> ");
  Serial.println(ambiente);

  delay(80);
}

/* ------------------ VERIFICAÇÃO DO AMBIENTE ----------------- 
uint32_t gerarCRC32(const char* str) { // Função CRC32 compatível com Python binascii.crc32
  return crc32_le(0, (const uint8_t*)str, strlen(str));
}*/

void verificarAmbiente(){

  static float features[MACS05];
  static float features2[MACS10];

  Serial.println("Entrou em verificarAmbiente()");

  if (!deviceConnected) return;

  std::fill(features, features + MACS05, RSSI_PADRAO);
  std::fill(features2, features2 + MACS10, RSSI_PADRAO);

  int n = WiFi.scanNetworks();
  Serial.printf("\nRedes encontradas: %d\n", n);

  char pacote[256];
  uint8_t pos = 0;

  for (size_t i = 0; i < n; i++) {

    int8_t rssi = WiFi.RSSI(i);
    uint8_t canal = WiFi.channel(i);
    String ssid = WiFi.SSID(i);

    uint8_t* bssid = WiFi.BSSID(i);

    char bssidStr[18];
    snprintf(
      bssidStr, sizeof(bssidStr),
      "%02x:%02x:%02x:%02x:%02x:%02x",
      bssid[0], bssid[1], bssid[2],
      bssid[3], bssid[4], bssid[5]
    );

    // ---------- CRC direto (sem string) ----------
    uint32_t bssidHash = crc32_le(0, bssid, 6);
    Serial.println(bssidHash);

    // Monta pacote sem String
    pos += snprintf(
      pacote + pos,
      sizeof(pacote) - pos,
      "%s,%s,%d,%d\n",
      ssid.c_str(),
      bssidStr,
      rssi,
      canal
    );

    if (pos > 180) {
      enviardados(pacote);
      pos = 0;
      pacote[0] = '\0';
    }

    for (size_t f = 0; f < MACS05; f++) {
      if (bssidHash == macHashList05[f]) {
        features[f] = rssi;
        break;
      }
    }
    
    for (size_t f = 0; f < MACS10; f++) {
      if (bssidHash == macHashList10[f]) {
        features2[f] = rssi;
        break;
      }
    }

    Serial.printf(
      "MAC: %s | CRC32: 0x%08x | RSSI: %d\n",
      bssidStr, bssidHash, rssi
    );
  }

  if (pos > 0) {
    enviardados(pacote);
  }

  WiFi.scanDelete();

  // XGB
  const char* ambientePred1 = XGB05.predictLabel(features);
  const char* ambientePred2 = XGB10.predictLabel(features2);
  //const char* ambientePred1 = "RF05";
  //const char* ambientePred2 = "RF10";
  // RF
  const char* ambientePred3 = RF05.predictLabel(features);
  const char* ambientePred4 = RF10.predictLabel(features2);
  //const char* ambientePred4 = "RF10";
  char resultado[180];
  snprintf(resultado, sizeof(resultado), "%s,%s,%s,%s\n", ambientePred1, ambientePred2, ambientePred3, ambientePred4);

  //pacote = String(ambientePred1) + "," + String(ambientePred2) + "," + String(ambientePred3) + "," + String(ambientePred4) + "\n";
  //pacote = "RF05,RF10," + String(ambientePred3) + "," + String(ambientePred4) + "\n";
  Serial.print("Ambiente detectado (XGB): ");
  Serial.println(ambientePred1);
  Serial.print("Ambiente detectado (XGB): ");
  Serial.println(ambientePred2);
  Serial.print("Ambiente detectado (RF05): ");
  Serial.println(ambientePred3);
  Serial.print("Ambiente detectado (RF10): ");
  Serial.println(ambientePred4);

  if (deviceConnected && pTxCharacteristic) {
    //enviardados(pacote);
    enviardados(resultado);
  }
  enviardados("END");
  Serial.println("Envio finalizado");
}

/* ------------------- CALLBACKS DE ESCRITA ------------------- */
class RXCallbacks : public NimBLECharacteristicCallbacks {

  void onWrite(NimBLECharacteristic* pCharacteristic, NimBLEConnInfo& connInfo) override {

    Serial.println("onWrite disparou");

    std::string rxValue = pCharacteristic->getValue();

    if (rxValue.length() > 0) {

      uint8_t comando = rxValue[0];

      Serial.print("Byte recebido: ");
      Serial.println(comando);

      if (comando == 1) {
        verificarAmbiente();
      }
    }
  }
};

void setup() {

  Serial.begin(115200);
  delay(1000);

  WiFi.mode(WIFI_STA);
  WiFi.disconnect(true);

  NimBLEDevice::init("ESP32-Detector");


  /* MTU maior */
  NimBLEDevice::setMTU(247);
  /* melhor estabilidade de conexão */
  NimBLEDevice::setPower(ESP_PWR_LVL_P9);
  /* aumentar buffers BLE */
  NimBLEDevice::setSecurityAuth(false, false, false);


  NimBLEServer* pServer = NimBLEDevice::createServer();
  pServer->setCallbacks(new ServerCallbacks());

  NimBLEService* pService = pServer->createService(SERVICE_UUID);

  pTxCharacteristic = pService->createCharacteristic(
    CHARACTERISTIC_TX,
    NIMBLE_PROPERTY::NOTIFY
  );

  /* CCCD obrigatório para WebBluetooth */
  pTxCharacteristic->createDescriptor(
    "2902",
    NIMBLE_PROPERTY::READ | NIMBLE_PROPERTY::WRITE
  );

  pRxCharacteristic = pService->createCharacteristic(
    CHARACTERISTIC_RX,
    NIMBLE_PROPERTY::WRITE | NIMBLE_PROPERTY::WRITE_NR | NIMBLE_PROPERTY::READ
  );

  pRxCharacteristic->setCallbacks(new RXCallbacks());

  pService->start();

  NimBLEAdvertising* pAdvertising = NimBLEDevice::getAdvertising();
  pAdvertising->addServiceUUID(SERVICE_UUID);
  pAdvertising->start();

  Serial.println("ESP32 pronta. Aguardando conexão BLE...");
}

void loop() {}



/*
for (size_t i = 0; i < n; i++) {

    uint8_t* bssid = WiFi.BSSID(i);

    char bssidStr[18];
    snprintf(
      bssidStr,
      sizeof(bssidStr),
      "%02x:%02x:%02x:%02x:%02x:%02x",
      bssid[0], bssid[1], bssid[2],
      bssid[3], bssid[4], bssid[5]
    );

    String linha =
      WiFi.SSID(i) + "," +
      WiFi.BSSIDstr(i) + "," +
      String(WiFi.RSSI(i)) + "," +
      String(WiFi.channel(i));

    pacote += linha + "\n";

    if (pacote.length() > 180) {
      enviardados(pacote);
      pacote = "";
    }

    //uint32_t bssidHash = gerarCRC32(bssidStr);
    uint32_t bssidHash = crc32_le(0, bssid, 6);
    int rssi = WiFi.RSSI(i);

    // -------- BUSCA LISTA 10 (completa) --------
    
    int idx10 = -1;

    for (size_t f = 0; f < MACS10; f++) {
      if (bssidHash == macHashList10[f]) {
        features2[f] = rssi;
        idx10 = f;
        break;
      }
    }

    // -------- SE EXISTE NA LISTA 10, VERIFICA SE ESTÁ NA LISTA 5 --------
    // preenche lista 05 automaticamente
    if (idx10 != -1) {
      int idx05 = map10to05[idx10];
      if (idx05 != -1) {
        features[idx05] = rssi;
      }
    }

    Serial.printf(
      "MAC: %s | CRC32: 0x%08x | RSSI: %d\n",
      bssidStr, bssidHash, rssi
    );
  }

  //--------------------------------------------------------------------------------------------------------------------
void verificarAmbiente() {

  float features_f[MACS05];
  float features2_f[MACS10];

  Serial.println("Entrou em verificarAmbiente()");

  if (!deviceConnected) return;

  // Inicializa
  for (size_t i = 0; i < MACS05; i++) features[i] = RSSI_PADRAO;
  for (size_t i = 0; i < MACS10; i++) features2[i] = RSSI_PADRAO;

  int n = WiFi.scanNetworks();
  Serial.printf("\nRedes encontradas: %d\n", n);

  String pacote = "";

  //char pacote[256];
  //size_t pos = 0;

  for (size_t i = 0; i < n; i++) {

    uint8_t* bssid = WiFi.BSSID(i);
    int rssi = WiFi.RSSI(i);

    // ---------- CRC direto (sem string) ----------
    uint32_t bssidHash = crc32_le(0, bssid, 6);

    // ---------- Monta pacote sem String ----------
    pos += snprintf(pacote + pos, sizeof(pacote) - pos, "%s,%s,%d,%d\n", WiFi.SSID(i).c_str(), WiFi.BSSIDstr(i).c_str(), rssi, WiFi.channel(i));

    // Envia se buffer encher
    if (pos > 180) {
      enviardados(pacote);
      pos = 0;
    }

    // ---------- Busca lista 10 ----------
    int idx10 = -1;

    for (size_t f = 0; f < MACS10; f++) {

      // se estiver usando PROGMEM:
      // uint32_t hash = pgm_read_dword(&macHashList10[f]);

      uint32_t hash = macHashList10[f];

      if (bssidHash == hash) {
        features2[f] = rssi;
        idx10 = f;
        break;
      }
    }

    // ---------- Preenche lista 05 via mapa ----------
    if (idx10 != -1) {

      // se estiver usando PROGMEM:
      // int8_t idx05 = pgm_read_byte(&map10to05[idx10]);

      int8_t idx05 = map10to05[idx10];

      if (idx05 != -1) {
        features[idx05] = rssi;
      }
    }

    // ---------- Debug sem criar string ----------
    Serial.printf(
      "MAC: %02x:%02x:%02x:%02x:%02x:%02x | CRC32: 0x%08x | RSSI: %d\n",
      bssid[0], bssid[1], bssid[2],
      bssid[3], bssid[4], bssid[5],
      bssidHash, rssi
    );
  }

  // Envia resto do buffer
  if (pos > 0) {
    enviardados(pacote);
  }

  WiFi.scanDelete();

  for (size_t i = 0; i < MACS05; i++) {
    features_f[i] = (float)features[i];
  }

  for (size_t i = 0; i < MACS10; i++) {
    features2_f[i] = (float)features2[i];
  }

  // -------- PREDIÇÃO --------

  // MACS05
  //const char* ambientePred1 = XGB05.predictLabel(features);
  //const char* ambientePred3 = RF05.predictLabel(features);
  //const char* ambientePred1 = XGB05.predictLabel(features_f);
  const char* ambientePred1 = "N";
  const char* ambientePred3 = RF05.predictLabel(features_f);


  // MACS10
  //const char* ambientePred2 = XGB10.predictLabel(features2);
  //const char* ambientePred4 = RF10.predictLabel(features2);
  //const char* ambientePred2 = XGB10.predictLabel(features2_f);
  const char* ambientePred2 = "N";
  const char* ambientePred4 = RF10.predictLabel(features2_f);

  //pacote = "0, 0 ," + String(ambientePred3) + ","  + String(ambientePred4) + "\n"; //String(ambientePred2)String(ambientePred1)
  char pacoteFinal[128];

  int len = snprintf(pacoteFinal, sizeof(pacoteFinal),
                    "%s,%s,%s,%s\n",
                    ambientePred1,
                    ambientePred2,
                    ambientePred3,
                    ambientePred4);

  Serial.print("Ambiente (XGB05): ");
  Serial.println(ambientePred1);

  Serial.print("Ambiente (XGB10): ");
  Serial.println(ambientePred2);

  Serial.print("Ambiente (RF05): ");
  Serial.println(ambientePred3);

  Serial.print("Ambiente (RF10): ");
  Serial.println(ambientePred4);

  //if (deviceConnected && pTxCharacteristic) {
  //  enviardados(pacote);
  //}
  enviardados(pacoteFinal);

  enviardados("END");
  Serial.println("Envio finalizado");
}
  */
