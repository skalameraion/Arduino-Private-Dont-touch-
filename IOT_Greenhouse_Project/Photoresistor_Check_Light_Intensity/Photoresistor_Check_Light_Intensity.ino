void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pin = A0;
  int ledpin = 9;
  int value = analogRead(pin);
  Serial.println("Sensor Value:");
  Serial.print(value);
  Serial.print(",");
  int output = map(value,0,1023,0,2);
  Serial.print("mapped Value:");
  Serial.print(output);
  if (output > 1){
    digitalWrite(ledpin, HIGH);
  }
  else if (output <= 1) {
    digitalWrite(ledpin, LOW);
  }
  delay(100);
 }
