int outPorts[] = {5, 1, 4, 3};

void setup() {
  for(int i = 0; i < 4; i++) {
    pinMode(outPorts[i], OUTPUT);
  }
}

void loop() {
  moveSteps(true, 32 * 64, 2);
  delay(1000);
  
  moveSteps(false, 32 * 64, 2);
  delay(1000);
}

void moveSteps(bool dir, int steps, byte ms) {
  for(int i = 0; i < steps; i++) {
    moveOneStep(dir);
    delay(ms);
  }
}

void moveOneStep(bool dir) {
  static byte out = 0x01;
  
  if(dir) {
    out != 0x08 ? out = out << 1 : out = 0x01;
  }
  
  else {
    out != 0x01 ? out = out >> 1 : out = 0x08;
  }
  
  for(int i = 0; i < 4; i++) {
    digitalWrite(outPorts[i], (out & (0x01 << i)) ? HIGH : LOW);
  }
}