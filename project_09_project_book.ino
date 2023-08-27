const int motorPin = 9;

void setup() {

  pinMode(motorPin, OUTPUT);
  analogWrite(motorPin, 0);
  delay(10000);
  analogWrite(motorPin, 80);// about 30% duty cycle

}

void loop() {
  
  delay(1000);
  
}
