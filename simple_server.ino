#include <WiFi.h>

const char* ssid = "ESP32_Access_Point";  // SSID of the AP
const char* password = "12345678";        // Password of the AP

void setup() {
  Serial.begin(115200);
  delay(1000); // Allow time for the Serial to initialize

  // Setting up the Access Point
  Serial.println("Setting up Access Point...");
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
}

void loop() {
  // Nothing to do here
}
