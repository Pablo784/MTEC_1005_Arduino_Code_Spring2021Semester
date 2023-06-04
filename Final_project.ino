const int buttonPin = 3;
const int piezo = 2;
const int LED = 13;
const int LED2 = 12;
const int LED3 = 11;

int sensorReading;
int pitch;

int buttonState = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

 pinMode(buttonPin, INPUT);
  
}

void loop() {
  sensorReading = analogRead(piezo);
  buttonState = digitalRead(buttonPin);
  delay(10);

 pitch = map(sensorReading, 20, 1020, 300, 50);


// conditional statement

if(buttonState == HIGH) {
digitalWrite(LED, HIGH);
  delay(200);

digitalWrite(LED2, LOW);
  delay(200);

digitalWrite(LED3, HIGH);
  delay(200);


digitalWrite(LED, LOW);
  delay(200);

digitalWrite(LED2, HIGH);
  delay(300);

digitalWrite(LED3, LOW);
  delay(300);






tone(piezo, 1100, 1200);
delay(3000);

digitalWrite(LED, HIGH);
delay(100);

tone(piezo, 1200, 1300);
delay(3000);

digitalWrite(LED2, LOW);
delay(200);

digitalWrite(LED3, HIGH);
delay(200);

digitalWrite(LED, LOW);
delay(200);

tone(piezo,1300, 1200);
delay(3000);

digitalWrite(LED2, HIGH);
delay(300);

tone(piezo, 1200, 1500);
delay(3000);

digitalWrite(LED3, LOW);
delay(300);

tone(piezo, 1100, 1300);
delay(3000);

digitalWrite(LED, HIGH);
delay(300);


tone(piezo, 1400, 1300);
delay(3000);

digitalWrite(LED, HIGH);
delay(300);


tone(piezo, 1400, 1300);
delay(3000);

digitalWrite(LED2, LOW);
delay(400);


tone(piezo, 1300, 1200);
delay(3000);

digitalWrite(LED3, HIGH);
delay(400);


tone(piezo, 1400, 1300);
delay(3000);

digitalWrite(LED, LOW);
delay(500);

tone(piezo, 1400, 1300);
delay(3000);

digitalWrite(LED2, LOW);
delay(500);


tone(piezo, 1400, 1300);
delay(3000);

digitalWrite(LED3, LOW);
delay(600);


}




}

// This is for the final project a lot of tinkering might be done. 
