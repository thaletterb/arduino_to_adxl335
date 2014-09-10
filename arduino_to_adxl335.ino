/*
Arduino to ADXL335 Sketch

Library to interface an Arduino Board (Nano) with an ADXL335 breakout board

ADXL335 breakout board is powered by 3.3V on it's input pin and outputs analog values on X, Y and Z pins

VIN connected to 3.3V output of Arduino
GND connected to GND

X Pin connected to Analog Pin 0 on Arduino
Y Pin connected to Analog Pin 1 on Arduino
Z Pin connected to Analog Pin Z on Arduino

9/9/14
Basic code working. Need to debug possible issue with serial monitor

*/

// Analog Read Pins
const int xPin = 0;
const int yPin = 1;
const int zPin = 2;

// Initialize sensor readings
int xReading = 0;
int yReading = 0;
int zReading = 0;

void setup(){
  // Initialize serial communication at 9600 bps Baud 
  Serial.begin(9600);
  
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(zPin, INPUT);  
  
}

void loop(){
  
  // Clear last sensor values
  xReading = 0;
  yReading = 0;
  zReading = 0;  
  
  // Read sensor values
  xReading = analogRead(xPin);
  yReading = analogRead(yPin);  
  zReading = analogRead(zPin);    
  
  // Print Values to Serial Monitor 
  Serial.println("X Reading:");
  Serial.println(xReading);
  Serial.println("Y Reading:");
  Serial.println(yReading);  
  Serial.println("Z Reading:");
  Serial.println(zReading);
  delay(500);  
}

