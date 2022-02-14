char  letter;
byte count;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("UNO is ready!");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  Serial.print("Counter: ");
  Serial.println(count);
  delay(1000);
  count++;
}

void serialEvent() {
  if(Serial.available()) {
    letter = Serial.read();
    Serial.print("UNO received: '");
    Serial.print(letter);
    Serial.println("'");
  }

  delay(10);
   
}
