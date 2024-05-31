void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
  digitalWrite(8, HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int readValue = digitalRead(2);
  Serial.println("I am reading the value: " + returnHiLo(readValue));
  delay(2500);

}

String returnHiLo(int readValue) {
  if(readValue == 1)
    return "HIGH! The button is pressed!";
  else
    return "LOW! The button is released!";
}
