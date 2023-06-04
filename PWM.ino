const int buttonPin = 2;
const int LED = 11;
const int LED2 = 12;
const int LED3 = 10;
const int LED4 = 13;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(buttonPin, INPUT);

pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
delay(10);

if(buttonState == HIGH){

  

analogWrite(LED, 160);
delay(200);
analogWrite(LED, 130);
delay(200);

analogWrite(LED, 1500);
delay(200);

analogWrite(LED, 250);
delay(200);
analogWrite(LED, 250);
delay(200);


analogWrite(LED2, 240);
delay(300);
analogWrite(LED2, 250);
delay(300);

analogWrite(LED3, 230);
delay(400);
analogWrite(LED3, 210);
delay(400);

analogWrite(LED4, 210);
delay(500);
analogWrite(LED4, 220);
delay(500);



digitalWrite(LED2, HIGH);
delay(300);

digitalWrite(LED2, LOW);
delay(300);

digitalWrite(LED3, HIGH);
delay(400);
digitalWrite(LED3, LOW);
delay(300);

digitalWrite(LED4, HIGH);
delay(400);
digitalWrite(LED4, LOW);
delay(200);

}
else {
  digitalWrite(LED, LOW);
    
}
}




  
  
