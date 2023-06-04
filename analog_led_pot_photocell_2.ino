
  // put your setup code here, to run once:
const int photocell = A0;
const int pot = A1; // creates fixed variable called sensor and assigns value A0
const int LED1 = 11; // creates fixed variable called LED and assigns value of 11
const int LED2 = 10;

const int LED3 = 9;
const int LED4 = 6;

int valuePhotocell = 0;
int valuePot = 0;

// setup function runs once at start up
void setup() {
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT);

  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  // initialize pin as an output.
  // note: no need to initialize pinMode for analog pins as they can only be inputs

  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// loop function runs infinitely
void loop() {
  valuePhotocell = analogRead (photocell); //Reads sensor pin and assigns to value
  delay (10);  //Small delay
  Serial.println(valuePhotocell);
  valuePhotocell = valuePhotocell/4;  //Dividing value by 4 reduces range to max 255
  analogWrite (LED1, valuePhotocell);
  analogWrite(LED2, valuePhotocell); 

  valuePot = analogRead(pot);
  delay(10);
  valuePot = valuePot/4;
  analogWrite(LED3, valuePot);
  analogWrite(LED4, valuePot);
  
  //Writes to LED
  //Serial.println(value); //Prints to serial monitor
}
