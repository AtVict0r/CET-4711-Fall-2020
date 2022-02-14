// set pin number:
const byte ledPin = 3; // number of LED pwm pin

void setup() {
}

void loop() {
    breath(ledPin, 6);
    delay(500);
}

void breath(byte ledPin, unsigned int delayMs) {
    byte i = 0;

    for(; i < 255; i++) { // increase 'i' from 0 to 255
        analogWrite(ledPin, i);
        delay(delayMs);
    }

    for(; i > 0; i--) { // decrease 'i' from 255 to 0
        analogWrite(ledPin, i);
        delay(delayMs);
    }
}