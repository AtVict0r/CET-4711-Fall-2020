const byte ledCount = 5 /* 101 */, /* the number of LEDs on the breadboard */

/* array of pin numbers */
/* const byte */ ledPins[] = {4 /* 100 */, 5 /* 101 */, 6 /* 110 */, 7 /* 111 */, 8 /* 1000 */};

void setup() {
  // put your setup code here, to run once:
  // loop over the pin array and set them to output
  for(byte i = 0; i < ledCount; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // the ith LED on the breadboard will light up
  for(byte i = 0; i < ledCount; i++){
    breadBoardDisplay(i);
  }
}

void breadBoardDisplay(byte ledOn){
  // turn the "ledOn"th LED on and switch off the others
  for(byte i = 0; i < ledCount; i++){
    if(i == ledOn){
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
  delay(100);
}
