const int sensor = A0; // creates a fixed variable called a sensor and assigned
const int LED =  11; // photcell
const int LED2 = 12; // photocell 









// creates a fixed variable called LED and assigns value
int value = 0;




void setup() {
  // put your setup code here, to run once:

  // initilize serial communication at 9600 bits (it's called baud)
Serial.begin(9600); //9600 bits per second 

  // for photocell 
pinMode(LED, OUTPUT);
pinMode(LED2, OUTPUT);

// for pot 
analogWrite(LED, OUTPUT);


// note: no need to initialize pinMode for analog input 

 
}

void loop() {
  // put your main code here, to run repeatedly:

// for photocell 
digitalWrite(LED2, HIGH);
delay(100);

digitalWrite(LED2, LOW);
delay(100);



  
value = analogRead(sensor); // reads sensor pin and assigns to value
delay(10); //debounce delay
Serial.println(value);
// LED wants 0-255, 0-1023  are the values from the sensor
value = value/4; // divinding value by 4 reduces range to max 255
analogWrite(LED, value);



}
