const int trigPin = 12, echoPin = 11, MAX_DISTANCE = 200, soundVelocity = 340;
const float timeOut = MAX_DISTANCE * 60;
float currentDistance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  
  float distance = getSonar();
  
   do {
    Serial.print("Ping: ");
    Serial.print(distance);
    Serial.println("cm");
    currentDistance = distance;
   } while(currentDistance != distance);
}

float getSonar() {
  unsigned long pingTime;
  float distance;

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pingTime = pulseIn(echoPin, HIGH, timeOut);
  distance = (float) pingTime * soundVelocity / 2 / 10000;

  return distance;
}
