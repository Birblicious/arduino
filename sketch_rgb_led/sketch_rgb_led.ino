void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  turnToGreen();
  delay(5000);
  turnToRed();
}

void turnToGreen() {
  analogWrite(11, 255);
  for(int i = 0; i <= 255; i++) {
    analogWrite(3, i);
    analogWrite(11, 255 - i);
    delay(25);
  }
}

void turnToRed() {
  analogWrite(3,255);
  for(int i = 0; i <= 255; i++) {
    analogWrite(11, i);
    analogWrite(3, 255 - i);
    delay(25);
  }
}
