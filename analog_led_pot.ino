const int sensor = A0; // creates a fixed variable called a sensor and assigned
const int LED =  11; // creates a fixed variable called LED and assigns value
const int LED2 =  12;
int value = 0;




void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(LED2, OUTPUT);
// note: no need to initialize pinMode for analog input 

 
}

void loop() {
  // put your main code here, to run repeatedly:
value = analogRead(sensor); // reads sensor pin and assigns to value
delay(10); //debounce delay
// LED wants 0-255, 0-1023  are the values from the sensor
value = value/4; // divinding value by 4 reduces range to max 255
analogWrite(LED, value);
analogWrite(LED2, value);

}
