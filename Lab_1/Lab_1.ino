const byte greenLED = 4, /* 100 */
/* const byte */ redLED = 5; // 101

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  delay(1000);

  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(1000);
}
