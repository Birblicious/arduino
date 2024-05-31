void setup() {
  // put your setup code here, to run once:
  // 5V pin is used as output.
  pinMode(A5, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // mapped max read value to lowest read value of analogRead(A5). normally supposed to be 0 - 1023 but
  // in my case between 228 to 960 ish works
  int mappedVal = map (analogRead(A5), 228, 960, 0, 255);
  Serial.println(mappedVal);
  analogWrite(3, mappedVal);
}
