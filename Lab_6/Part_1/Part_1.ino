const int greenLEDPin = 9, redLEDPin = 10, blueLEDPin = 11, 
redSensorPin = A0, greenSensorPin = A2, blueSensorPin = A1;

void setup()
{
  Serial.begin(9600);
  
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
}

void loop()
{
  int redSensorValue = analogRead(redSensorPin);
  int greenSensorValue  = analogRead(greenSensorPin);
  int blueSensorValue  = analogRead(blueSensorPin);
  serialWriteSensor(redSensorValue, greenSensorValue, blueSensorValue);
    
  int greenValue = greenSensorValue/4;
  int redValue =redSensorValue/4;
  int blueValue = blueSensorValue/4;
  serialWriteValue(redValue, greenValue, blueValue);
  
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}

void serialWriteSensor(int redSensorValue, int greenSensorValue, int blueSensorValue){
  Serial.print("Raw Sensor Values \t Red: ");
  Serial.print(redSensorValue);
  Serial.print("\t Green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);
  
  delay(20);
}

void serialWriteValue(int redValue, int greenValue, int blueValue){
  Serial.print("Mapped Sensor Values \t Red: ");
  Serial.print(redValue);
  Serial.print("\t Green: ");
  Serial.print(greenValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);
  
  delay(20);
}
