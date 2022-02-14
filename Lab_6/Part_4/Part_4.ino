#include <Servo.h>

Servo myservo;

void setup()
{
  myservo.attach(3);

}

void loop()
{
  int potVal = analogRead(A0);
  potVal = map(potVal, 0, 1023, 0, 180);
  myservo.write(potVal);
  delay(15);
}