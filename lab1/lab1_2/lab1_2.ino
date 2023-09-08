
void setup() {
  // put your setup code here, to run once:
  pinMode(11 , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potval = analogRead(A0);
  int brightness = map(potval, 0, 1023, 0, 255);
  analogWrite(11 , brightness);
  Serial.println(brightness);
  delay(100);
}
