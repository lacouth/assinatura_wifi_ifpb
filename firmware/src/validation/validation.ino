#include <Arduino.h>
#include <WiFi.h>
#include <rom/crc.h>
#include <NimBLEDevice.h>
//#include "RandomForestClassifier.h"
//#include "XGBClassifier.h"
//#include "RandomForestClassifier2.h"
//#include "XGBClassifier2.h"
#include "RandomForestClassifier3.h"
//#include "XGBClassifier3.h"

/* ----------------------- CONFIGURAÇÕES ----------------------- */
#define MACS (sizeof(macHashList) / sizeof(macHashList[0]))
#define RSSI_PADRAO -110

#define SERVICE_UUID        "19b10000-e8f2-537e-4f6c-d104768a1213"
#define CHARACTERISTIC_TX   "19b10000-e8f2-537e-4f6c-d104768a1214"
#define CHARACTERISTIC_RX   "19b10000-e8f2-537e-4f6c-d104768a1215"

//Eloquent::ML::Port::RandomForest regressor;
//Eloquent::ML::Port::XGBClassifier regressor;
//Eloquent::ML::Port::RandomForest2 regressor;
//Eloquent::ML::Port::XGBClassifier2 regressor;
Eloquent::ML::Port::RandomForest3 regressor;
//Eloquent::ML::Port::XGBClassifier3 regressor;

NimBLECharacteristic* pTxCharacteristic;
NimBLECharacteristic* pRxCharacteristic;
bool deviceConnected = false;

/* ----------------- LISTA DE MACS CONHECIDOS ------------------ */
uint32_t macHashList[] = {
  0x73F38739, 0xCF74A182, 0xDD7E00E0, 0x3D2928C4, 0xB780706E,
  0xD498EAF9, 0x0F53C7E1, 0xCD64C8B2, 0x1B4E2750, 0xF540467C,
  0x258065C0, 0xCB8E04EC, 0x7EBD0DDF, 0x90B36CF3, 0xBACE758B,
  0x4C304F42, 0xA23E2E6E, 0xBC62F26E, 0x526C9342, 0xFB461388,
  0x282E4FC3, 0x19417453, 0x65F5BD30, 0x5BFC0584, 0x49AED499,
  0x325AE7E8, 0x9983C2B2, 0x4874914F, 0xF2F563E8, 0x1CFB02C4,
  0xDEF4601C, 0x30FA0130, 0xBA183585, 0x541654A9, 0xDE74F081,
  0x307A91AD, 0xB242372E, 0x5C4C5602, 0x5CA4F7CD, 0xB2AA96E1,
  0x26BC3B94, 0xC8B25AB8, 0x296AE03B, 0xC7648117, 0x3BDF4FD5,
  0xD5D12EF9, 0x77A93E79, 0x99A75F55, 0xD6EA2480, 0x38E445AC,
  0x710EDE71, 0x9F00BF5D, 0xB6C27760, 0x58CC164C, 0x81BF5EED,
  0x267C0156, 0xC872607A, 0xCBCED482, 0x25C0B5AE, 0x14CAF349,
  0xFAC49265, 0xC58B9B4B, 0xCAD8092C, 0x2C46FB4C, 0x338A1473,
  0xAE25F5A4, 0x7E119E42, 0x901FFF6E, 0xAFDE6CA9
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

  float features[MACS];

  Serial.println("Entrou em verificarAmbiente()");

  if (!deviceConnected) return;

  for (size_t i = 0; i < MACS; i++){
    features[i] = RSSI_PADRAO;
  }

  int n = WiFi.scanNetworks();
  Serial.printf("\nRedes encontradas: %d\n", n);

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

    uint32_t bssidHash = gerarCRC32(bssidStr);
    int rssi = WiFi.RSSI(i);

    for (size_t f = 0; f < MACS; f++) {
      if (bssidHash == macHashList[f]) {
        features[f] = rssi;
        break;
      }
    }

    Serial.printf(
      "MAC: %s | CRC32: 0x%08x | RSSI: %d\n",
      bssidStr, bssidHash, rssi
    );
  }

  WiFi.scanDelete();

  const char* ambientePred = regressor.predictLabel(features);

  Serial.print("Ambiente detectado: ");
  Serial.println(ambientePred);

  if (deviceConnected && pTxCharacteristic) {
    enviardados(String(ambientePred));
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
