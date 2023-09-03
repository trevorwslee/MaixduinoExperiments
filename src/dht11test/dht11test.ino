#include <Arduino.h>
#include "DHT.h"


#define DHT_PIN 5

DHT dht(DHT_PIN, DHT11); 


void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %");
  Serial.print("  /  Temperature: ");
  Serial.print(t);
  Serial.println("  °C");
}
  
