void setup() {
    // initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
    // read the input on analog pin 0:
    int adcVal = analogRead(A0);
    // calculate voltage
    float v = adcVal * 5.0 / 1024;
    // calculate resistance value of thermistor
    float rt = 10 * v / (5 - v);
    // temperature (kelvin)
    float tempK = 1 / (log(rt / 10) / 3950 + 1 / (273.15 + 25));
    // temperature (celsius)
    float tempC = tempK - 273.15;

    // print value to read
    Serial.print("Voltage is:\t");
    // print out analog voltage:
    Serial.print(adcVal);
    Serial.print("\t");
    // print out digital voltage:
    Serial.print(v);
    Serial.println("V");
    Serial.print("Thermistor resistance is:\t");
    // print out analog voltage:
    Serial.print(rt);
    Serial.println("ohms");
    // send the temperature to serial monitor
    Serial.print("Current temperature is:\t");
    // print out temp in K:
    Serial.print(tempK);
    Serial.print("K,\t");
    // print out temp in C:
    Serial.print(tempC);
    Serial.println("C\n");
    delay(500);
}
