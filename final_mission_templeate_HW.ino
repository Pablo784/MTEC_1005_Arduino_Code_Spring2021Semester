#include <Servo.h> // include Arduino Servo library
const int potPin = A0;  // create potPin variable, assign pin A0
const int photocell = A1;
const int servoPin = 9;  // create servoPin variable, assign
const int LED1 = 6;  // create LED variable, assign 4
const int LED2 = 5;
const int LED3 = 11;
int reading = 0;
int valuephotocell = 0; //variable to track potentiometer reading
int angle = 0; // variable to track motor angle between 0-180 degrees
Servo servo; // create Servo object
void setup() {
  servo.attach(servoPin);  //attach servo variable to control pin
  pinMode (LED1, OUTPUT);//set LED pin as output
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  Serial.begin(9600);  //begin serial communication at 9600 baud rate
}
void loop() {
  reading = analogRead(potPin);     // reads pot 0 to 1023
  angle = reading / 6;              // reduces pot value to 0 to 180-ish to match servo range
  if (reading >25 && reading <= 512) { // if pot value between 25 and half
/*
    //*******modify the LED behavior to do something else*********
    digitalWrite (LED1, HIGH);  // write HIGH voltage to LED pin
    delay (500);  // delay 1/2 a second
    digitalWrite (LED1, LOW);  // write no/LOW voltage to LED pin
    delay (500);
    digitalWrite (LED2, HIGH);
    delay(100);
    digitalWrite (LED2, LOW);
    delay(100);
    digitalWrite (LED3, HIGH);
    delay(100);
    digitalWrite (LED3, LOW);
    delay(500);
    */
    valuephotocell = analogRead (photocell);
    delay (10);
    valuephotocell = valuephotocell/4;
    analogWrite (LED1, valuephotocell);
    analogWrite (LED2, valuephotocell);
    analogWrite (LED3, valuephotocell);
  } else if (reading > 512 && reading <= 1023) {  // else if pot value between half and max
    //********modify the sweep's speed and range***************
    // sweep 0 to 180
    for (angle = 0; angle < 180; angle++) {
      servo.write(angle);
      delay(10);
    }
    // sweep 180 to 0
    for (angle = 180; angle > 0; angle--) {
      servo.write(angle);
      delay(10);
    }
  } else {
    digitalWrite (LED1, LOW);  // write no/LOW voltage to LED pin
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }
  Serial.print("Potentiometer: ");
  Serial.print(reading);
  Serial.print(", Photocell: ");
  Serial.println(valuephotocell);
  // Serial.println(reading);  // print pot value to monitor
}
