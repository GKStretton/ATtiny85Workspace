void setup() {
  pinMode(0, OUTPUT);
}

void loop() {
  digitalWrite(0, HIGH);
  delay(400);
  digitalWrite(0, LOW);
  delay(400);
}
