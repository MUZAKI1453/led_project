int redLed    = 7;
int yellowLed = 6;
int greenLed  = 5;

void setup() {
  pinMode(redLed,    OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed,  OUTPUT);

}

void loop() {
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
  delay(1000);

  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  delay(1000);
}
