   const byte    ledPin[] = {2, 3, 4, 5, 6},
/* const byte */ pinCount = sizeof(ledPin),
/* const byte */ switchPin[] = {8, 9, 10, 11},
/* const byte */ switchCount = sizeof(switchPin);
const int pauseProgram = 100;

void setup() {
  // put your setup code here, to run once:
  for(byte i = 0; i < ledCount; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  for(byte i = 0; i < switchCount; i++) {
    pinMode(switchPin[i], INPUT_PULLUP);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  powerOff();

  byte userOption = 2;

  for(byte i = 0; i < switchCount; i++) {
    if(switchPin[i]) {
      userOption = i;
      break;
    }
  }

  switch(userOption) {
    case 0: {
      scrollLeft();
      break;
    }
    case 1: {
      scrollRight();
      break;
    }
    case 2: {
      powerOff();
      break;
    }
    case 3: {
      startBlinking();
      break;
    }
    default:{
      powerOff();
    }
  }
}

// First switch pressed: LEDs scroll left to right
void scrollLeft() {
  for(byte i = 0; i < pinCount; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(pauseProgram);
    digitalWrite(ledPin[i], LOW);
    delay(pauseProgram);
  }
}

// Second switch pressed: LEDs scroll right to left
void scrollRight() {
  for(byte i = (pinCount - 1); i >= 0; i--) {
    digitalWrite(ledPin[i], HIGH);
    delay(pauseProgram);
    digitalWrite(ledPin[i], LOW);
    delay(pauseProgram);
  }
}

// Third switch pressed: All LEDs are OFF
void powerOff() {
  for(byte i = 0; i < pinCount; i++) {
    digitalWrite(ledPin[i], LOW);
  }
}

// Fourth switch: All LEDs start blinking
void powerOn() {
  for(byte i = 0; i < pinCount; i++) {
    digitalWrite(ledPin[i], HIGH);
  }
}

void startBlinking() {
  powerOn();
  delay(pauseProgram);

  powerOff();
  delay(pauseProgram);
}