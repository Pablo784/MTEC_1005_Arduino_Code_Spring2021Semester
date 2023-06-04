#include <Servo.h> // includes Arduino Servo Library

const int potPin = A0; // create pot pin variable assigned to A0
const int servoPin = 9; // creates servoPin variable, assigns 9 

Servo servo; // creates a Servo object

int reading = 0; // variable to track pot reading 
int angle = 0; // variable to track servo position in degrees
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
servo.attach(servoPin); // attact servo variable to control pin
}

void loop() {
 reading = analogRead(potPin); // reads from the pot (0-1023) 
 Serial.println(reading);
 angle = reading / 6; // reduces pot value (0=170)
  servo.write(angle); // writes angle to servo
}
