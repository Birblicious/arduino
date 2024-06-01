void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 // int val = map (analogRead(A0), 650, 700, 0, 255);
  Serial.println(analogRead(A0));
  delay(100);
}
