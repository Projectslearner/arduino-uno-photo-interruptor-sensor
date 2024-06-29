/*
    Project name : Arduino Uno Photo Interrupter Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-photo-interrupter-sensor
*/

// Pin connected to the photo interrupter sensor's output
const int sensorPin = 2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(sensorPin, INPUT_PULLUP);  // Set sensor pin as input with internal pull-up resistor
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read sensor state

  if (sensorValue == LOW) {
    Serial.println("Object detected");
  } else {
    Serial.println("No object detected");
  }

  delay(500);  // Delay for readability
}
