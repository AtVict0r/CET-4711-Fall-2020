// set pin number:
const byte ledPin[] = {5, 6, 9, 10}; // number of LED pin
const byte dutyCycle[] = {2, 10, 50, 100}; // duty cycle for LED pin

void setup() {
    // initialize LED as output:
    for(byte i = 0; i < sizeof(ledPin); i++) {
        pinMode(i, OUTPUT);
    }
}

void loop() {
    // set the ports output PWM waves with different duty cycles
    for(byte i = 0; i < sizeof(dutyCycle); i++) {
        byte pwmWave = map(dutyCycle[i], 0, 100, 0, 255);
        analogWrite(ledPin[i], pwmWave);
    }
}
