const int ledPinR = 11, ledPinB = 10, ledPinG = 9;

void setup()
{
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinG, OUTPUT);
}

void loop()
{
  rbgDisplay(random(256), random(256), random(256));
  delay(500);
}

void rbgDisplay(int r, int b, int g)
{
  analogWrite(ledPinR, constrain(r, 0, 255));
  analogWrite(ledPinB, constrain(b, 0, 255));
  analogWrite(ledPinG, constrain(g, 0, 255));
}