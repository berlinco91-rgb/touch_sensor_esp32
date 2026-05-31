#include <ESP32Servo.h>

Servo myServo;

const int touchPin = 4;   // Touch sensor digital output
const int servoPin = 16
;  // Servo signal pin

void setup() {
  pinMode(touchPin, INPUT);

  myServo.attach(servoPin);
  myServo.write(0);  // Start at 0°
}

void loop() {
  if (digitalRead(touchPin) == HIGH) {
    myServo.write(90);   // Move to 90°
  } else {
    myServo.write(0);    // Return to 0°
  }

  delay(20);
}
