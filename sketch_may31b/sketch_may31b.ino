void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello");

}

void loop() {
  // put your main code here, to run repeatedly:
  String learningTime = "Learning time: ";
  delay(1000);
  Serial.println(learningTime += millis());

}
