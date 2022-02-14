#include <Servo.h>

Servo myservo;

void setup()
{
  myservo.attach(3);

}

void loop()
{
  for(int pos = 0; pos <= 180; pos++) {
    myservo.write(pos);
    delay(15);
  }
  
  for(int pos = 180; pos >= 0; pos--) {
    myservo.write(pos);
    delay(15);
  }
}