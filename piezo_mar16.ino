const int piezo = 2; // creating our varible for pin 2 
const int sensor = A0; // creating varibale for pin A0
int sensorReading; // to track photocell input
int pitch; // track the pitch 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorReading = analogRead(sensor); // reading the sensor
  Serial.println(sensorReading);


// use map() of analog input range (0-1023 from the photocell)
// to the output pitch range (120-3000Hz)

pitch = map(sensorReading, 20, 1020, 300, 50);
  
tone(piezo, 1500, 200); // send tone to piezo pin, 1500Hz, 500ms duration
delay(2000); // delay in between readings for stability 

tone(piezo, 400, 2000);
delay(1000);

tone(piezo, 1600, 300);
delay(3000);

tone(piezo, 1700, 300);
delay(3000);

tone(piezo, 1900, 400);
delay(2000);

tone(piezo, 2000, 300);
delay(3000);

tone(piezo, 1000, 100);
delay(2000);

tone(piezo, 2000, 200);
delay(2000);

tone(piezo, 2000, 300);
delay(3000);

tone(piezo, 3000, 300);
delay(3000);
}
