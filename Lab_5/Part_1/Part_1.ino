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
  delay(500);
  count++;
}
