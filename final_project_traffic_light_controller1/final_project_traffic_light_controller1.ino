const int j1[] = {0, 1, 2}, 
  j2[] = {3, 4, 5}, 
  j3[] = {6, 7, 8},  
  j4[] = {9, 10, 11};

void testLED(){
  for(int i = 0; i <= 11; i++){
  	digitalWrite(i, HIGH);
  	delay(500); // Wait for 500 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(500); // Wait for 500 millisecond(s)
  }
  delay(1000); // Wait for 1 second
}

void turnRed(const int arr[3]){
  	digitalWrite(arr[0], HIGH);
  	digitalWrite(arr[1], LOW);
  	digitalWrite(arr[2], LOW);
}

void turnRed(const int arr1[3], const int arr2[3]){
  	turnRed(arr1);
  	turnRed(arr2);
}

void turnYellow(const int arr[3]){
  	digitalWrite(arr[0], LOW);
  	digitalWrite(arr[1], HIGH);
  	digitalWrite(arr[2], LOW);
}

void turnYellow(const int arr1[3], const int arr2[3]){
  	turnYellow(arr1);
  	turnYellow(arr2);
}

void turnGreen(const int arr[3]){
  	digitalWrite(arr[0], LOW);
  	digitalWrite(arr[1], LOW);
  	digitalWrite(arr[2], HIGH);
}

void turnGreen(const int arr1[3], const int arr2[3]){
  	turnGreen(arr1);
  	turnGreen(arr2);
}

void setup(){
  for(int i = 0; i <= 11; i++){
  	pinMode(i, OUTPUT);
  }
  
  testLED();
}

void loop(){	
  	turnGreen(j1, j3);
 	turnRed(j2, j4);
 
 	delay(10000); // Wait for 10 seconds
 
 	turnYellow(j1, j3);
 	 
 	delay(5000); // Wait for 5 seconds
 
 	turnRed(j1, j3);
 	turnGreen(j2, j4);
 
 	delay(10000); // Wait for 10 seconds
 
 	turnYellow(j2, j4);
 
 	delay(5000); // Wait for 5 seconds
}