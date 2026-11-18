#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <OneWire.h>
#include <DallasTemperature.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_DASHBOARD_TOPIC_ID";

#define ONE_WIRE_BUS D2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

KiwisIoT kiwisiot(ssid, pass, topic);

void setup() {
  Serial.begin(115200);

  sensors.begin();
  kiwisiot.begin();

  Serial.println("Underwater Temperature Monitoring Started");
}

void loop() {
  kiwisiot.run();

  static unsigned long lastSend = 0;

  if (millis() - lastSend >= 2000) {
    lastSend = millis();

    sensors.requestTemperatures();

    float temperature =
      sensors.getTempCByIndex(0);

    if (temperature != DEVICE_DISCONNECTED_C) {

      Serial.print("Water Temperature: ");
      Serial.print(temperature);
      Serial.println(" °C");

      String data = String(temperature, 2);

      kiwisiot.send("0", data);
    }
    else {
      Serial.println("Sensor connection error!");
    }
  }

  delay(100);
}