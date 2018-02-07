#include <dht11.h>

dht11 dht11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  dht11.read(A3);
  int hvalue = dht11.humidity;
  int tvalue = dht11.temperature;
  Serial.print("Temperature Sensor Value:");
  Serial.print(tvalue);
  Serial.print(", Humidity Sensor Value");
  Serial.println(hvalue);
  delay(500);
}
