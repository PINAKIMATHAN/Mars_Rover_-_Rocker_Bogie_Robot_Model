#include "WiFi.h"

const char* ssid     = "88888888";
const char* password = "h88888888";

void setup(){
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  delay(100);
}

void loop(){
  Serial.print("RSSI: ");
  Serial.println(WiFi.RSSI());
  delay(2000);
}
