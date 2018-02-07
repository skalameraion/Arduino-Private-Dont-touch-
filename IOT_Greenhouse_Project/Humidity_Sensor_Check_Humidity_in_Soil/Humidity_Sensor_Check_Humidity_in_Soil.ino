void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pin = A1;
  int ledpin = 9;
  int value = analogRead(pin);
  Serial.print("Sensor Value:");
  Serial.print(value);
  Serial.print(",");
  int svalue = value/2;
  Serial.print("Sensor Value/2 :");
  Serial.println(svalue);
  if (svalue >= 500){
    digitalWrite(ledpin, LOW);
  }
  else {
    digitalWrite(ledpin, HIGH);
  }
  delay(100);
 }
