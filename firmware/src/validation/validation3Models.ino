#include <Arduino.h>
#include <WiFi.h>
#include <rom/crc.h>
#include <NimBLEDevice.h>
#include <math.h>
#include "XGBClassifierMacro05.h"
#include "XGBClassifierMacro10.h"
#include "RandomForestClassifierMacro05.h"
#include "RandomForestClassifierMacro10.h"

/* ----------------------- CONFIGURAÇÕES ----------------------- */
#define MACS5 (sizeof(macHashList5) / sizeof(macHashList5[0]))
#define MACS10 (sizeof(macHashList10) / sizeof(macHashList10[0]))
#define RSSI_PADRAO -100

#define SERVICE_UUID        "19b10000-e8f2-537e-4f6c-d104768a1213"
#define CHARACTERISTIC_TX   "19b10000-e8f2-537e-4f6c-d104768a1214"
#define CHARACTERISTIC_RX   "19b10000-e8f2-537e-4f6c-d104768a1215"

Eloquent::ML::Port::XGBClassifierMacro05 XGB05;
Eloquent::ML::Port::XGBClassifierMacro10 XGB10;
Eloquent::ML::Port::RandomForestMacro05 RF05;
//Eloquent::ML::Port::RandomForestMacro10 RF10;

NimBLECharacteristic* pTxCharacteristic;
NimBLECharacteristic* pRxCharacteristic;
bool deviceConnected = false;

/* ----------------- LISTA DE MACS CONHECIDOS ------------------ */
uint32_t macHashList5[] = {
  0x1B4E2750, 0xF540467C, 0x258065C0, 0xCB8E04EC, 0x7EBD0DDF, 
  0x90B36CF3, 0x4C304F42, 0xA23E2E6E, 0xBC62F26E, 0x526C9342, 
  0xF2F563E8, 0x1CFB02C4, 0xDEF4601C, 0x30FA0130, 0xBA183585, 
  0x541654A9, 0xDE74F081, 0x307A91AD, 0xB242372E, 0x5C4C5602, 
  0x5CA4F7CD, 0xB2AA96E1, 0x26BC3B94, 0xC8B25AB8, 0x296AE03B, 
  0xC7648117, 0x3BDF4FD5, 0xD5D12EF9, 0x77A93E79, 0x99A75F55, 
  0xD6EA2480, 0x38E445AC, 0x710EDE71, 0x9F00BF5D, 0xB6C27760, 
  0x58CC164C, 0x267C0156, 0xC872607A, 0xCBCED482, 0x25C0B5AE, 
  0x14CAF349, 0xFAC49265, 0x7E119E42, 0x901FFF6E, 
};

uint32_t macHashList10[] = {
  0x1B4E2750, 0xF540467C, 0x258065C0, 0xCB8E04EC, 0x09401628, 
  0xE74E7704, 0x7EBD0DDF, 0x90B36CF3, 0x4C304F42, 0xA23E2E6E, 
  0xDF273218, 0x31295334, 0xBC62F26E, 0x526C9342, 0xF2F563E8, 
  0x1CFB02C4, 0xDEF4601C, 0x30FA0130, 0xBA183585, 0x541654A9, 
  0xDE74F081, 0x307A91AD, 0xB242372E, 0x5C4C5602, 0x5CA4F7CD, 
  0xB2AA96E1, 0x26BC3B94, 0xC8B25AB8, 0x296AE03B, 0xC7648117, 
  0x3BDF4FD5, 0xD5D12EF9, 0x44AF81A1, 0xAAA1E08D, 0x77A93E79, 
  0x99A75F55, 0xD6EA2480, 0x38E445AC, 0x710EDE71, 0x9F00BF5D, 
  0xB6C27760, 0x58CC164C, 0x267C0156, 0xC872607A, 0xCBCED482, 
  0x25C0B5AE, 0x14CAF349, 0xFAC49265, 0x7E119E42, 0x901FFF6E, 
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

/* ------------------ VERIFICAÇÃO DO AMBIENTE ----------------- */
uint32_t gerarCRC32(const char* str) { // Função CRC32 compatível com Python binascii.crc32
  return crc32_le(0, (const uint8_t*)str, strlen(str));
}

void verificarAmbiente(){

  float features[MACS5];
  float features2[MACS10];

  Serial.println("Entrou em verificarAmbiente()");

  if (!deviceConnected) return;

  for (size_t i = 0; i < MACS5; i++){
    features[i] = RSSI_PADRAO;
    //features[i] = pow(10.0, RSSI_PADRAO / 10.0);
  }

  for (size_t i = 0; i < MACS10; i++){
    features2[i] = RSSI_PADRAO;
  }

  int n = WiFi.scanNetworks();
  Serial.printf("\nRedes encontradas: %d\n", n);

  String pacote = "";

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

    uint32_t bssidHash = gerarCRC32(bssidStr);
    Serial.println(bssidHash);
    int rssi = WiFi.RSSI(i);

    for (size_t f = 0; f < MACS5; f++) {
      if (bssidHash == macHashList5[f]) {
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

  if (pacote.length() > 0) {
    enviardados(pacote);
  }

  WiFi.scanDelete();

  // XGB
  const char* ambientePred1 = XGB05.predictLabel(features);
  const char* ambientePred2 = XGB10.predictLabel(features2);
  // RF
  const char* ambientePred3 = RF05.predictLabel(features);
  //const char* ambientePred4 = RF10.predictLabel(features2);

  pacote = String(ambientePred1) + "," + String(ambientePred2) + "," + String(ambientePred3) + ",0\n";
  Serial.print("Ambiente detectado (XGB): ");
  Serial.println(ambientePred1);
  Serial.print("Ambiente detectado (XGB): ");
  Serial.println(ambientePred2);
  Serial.print("Ambiente detectado (RF): ");
  Serial.println(ambientePred3);
  //Serial.print("Ambiente detectado (RF): ");
  //Serial.println(ambientePred4);

  if (deviceConnected && pTxCharacteristic) {
    enviardados(pacote);
    //enviardados(String(ambientePred1));
    //enviardados(String(ambientePred2));
    //enviardados(String(ambientePred3));
    //enviardados(String(ambientePred4));
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
