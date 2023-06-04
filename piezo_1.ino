/*
  PIEZO
  Example using tone() to send square wave to piezo.
  Create circuit with piezo connected to digital pin 2 and ground wire to ground.
  Arguments for tone= pin #, frequency in Hz, and duration of the tone in milliseconds:
  tone (pin, frequency, duration)
  Recommended to use frequencies 30-5,000 Hz.
*/

// THIS IS FROM PROFESSOR CORN'S REPO ON GITHUB


//Create global variables
const int piezo = 2;
const int sensor = A0;
int value = 0;

// setup() runs once
void setup() {
  // nothing needed here
}

// loop() runs continuously
void loop() {
  value = analogRead(sensor);
  delay(10);
  
  tone(piezo, 1500, 500); //send tone to piezo pin, 1500 Hz, 500 ms duration
  delay(1000);
  tone(piezo, 500, 1000);
  delay(1000);
}
