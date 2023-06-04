const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
void setup() {




  
  // put your setup code here, to run once: 
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);


}

void loop() {
digitalWrite(LED1, HIGH); 
delay(100);
digitalWrite(LED1, LOW); 
delay(100); 

digitalWrite(LED2, HIGH);
delay(200);

digitalWrite(LED2, LOW);
delay(200);

digitalWrite(LED3, HIGH);
delay(300);
digitalWrite(LED3, LOW);
delay(300);

digitalWrite(LED4, HIGH); 
delay(400);
digitalWrite(LED4, LOW);
delay(400);

  // put your main code here, to run repeatedly:




}
