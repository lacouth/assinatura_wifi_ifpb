#include <WiFi.h>
#include <NimBLEDevice.h>

#define SERVICE_UUID        "19b10000-e8f2-537e-4f6c-d104768a1213"
#define CHARACTERISTIC_TX   "19b10000-e8f2-537e-4f6c-d104768a1214"
#define CHARACTERISTIC_RX   "19b10000-e8f2-537e-4f6c-d104768a1215"

NimBLECharacteristic* pTxCharacteristic;
NimBLECharacteristic* pRxCharacteristic;
bool deviceConnected = false;

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

void enviarredes(const std::string &rede) {

  if (!deviceConnected) return;

  pTxCharacteristic->setValue(
    (uint8_t*)rede.data(),
    rede.length()
  );

  bool ok = pTxCharacteristic->notify(connHandle);

  if (!ok) {
    Serial.print("BUFFER CHEIO -> ");
    delay(120);  // espera o cliente consumir os pacotes
    pTxCharacteristic->notify(connHandle);
  }

  Serial.print("NOTIFY -> ");
  Serial.println(rede.c_str());

  delay(80);
}


/* ---------- ENVIO DAS REDES WIFI ---------- */
void detectarAmbiente() {

  Serial.println("Entrou em detectarAmbiente()");

  if (!deviceConnected) return;

  WiFi.mode(WIFI_STA);
  WiFi.disconnect(true);
  delay(200);

  Serial.println("Escaneando redes WiFi...");

  int n = WiFi.scanNetworks(false, true);

  Serial.print("Redes encontradas: ");
  Serial.println(n);

  std::string pacote = "";

  for (int i = 0; i < n; i++) {

    std::string linha =
      std::string(WiFi.SSID(i).c_str()) + "," +
      std::string(WiFi.BSSIDstr(i).c_str()) + "," +
      std::to_string(WiFi.RSSI(i)) + "," +
      std::to_string(WiFi.channel(i));

    pacote += linha + "\n";

    if (pacote.length() > 180) {

      enviarredes(pacote);
      pacote = "";

    }
  }

  if (pacote.length() > 0) {
    enviarredes(pacote);
  }

  enviarredes("END");

  Serial.println("Envio finalizado");
}

/* ---------- CALLBACK DE ESCRITA ---------- */
class RXCallbacks : public NimBLECharacteristicCallbacks {

  void onWrite(NimBLECharacteristic* pCharacteristic, NimBLEConnInfo& connInfo) override {

    Serial.println("onWrite disparou");

    std::string rxValue = pCharacteristic->getValue();

    if (rxValue.length() > 0) {

      uint8_t comando = rxValue[0];

      Serial.print("Byte recebido: ");
      Serial.println(comando);

      if (comando == 1) {
        detectarAmbiente();
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

void loop() {
}