 // put your setup code here, to run once:
const int buttonPin = 2;
const int LED = 13;

int buttonState = 0;

void setup() {
pinMode(LED, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin); 
delay(10);




 //conditional statement 
  if (buttonState == HIGH){
digitalWrite(LED, HIGH);
}
else {
  digitalWrite(LED, LOW);
}
}
