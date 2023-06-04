const int sensor = A0; // creates a fixed variable called a sensor and assigned
const int LED =  13;  // photocell
const int LED2 = 12;  // photocell

const int LED3 = 11; // pot
const int LED4 = 10; // pot
int value = 0; 











void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);


  // initilize serial communication at 9600 bits (it's called baud)
Serial.begin(9600); //9600 bits per second 

  

// note: no need to initialize pinMode for analog input 

 
}

void loop() {
  // put your main code here, to run repeatedly:

value = analogRead(sensor);// reads sensor pin and assigns to value 
delay(10); // debounce delay
Serial.println(value);
// LED wants 0-255, 0-1023  are the values from the sensor
value = value/4; // divinding value by 4 reduces range to max 255

analogWrite (LED, value);
analogWrite(LED2, value);

analogWrite(LED3, value);
analogWrite(LED4, value);




}
