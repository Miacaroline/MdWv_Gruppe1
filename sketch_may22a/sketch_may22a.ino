/*macro definitions of PIR motion sensor pin and LED pin*/
#define PIR_MOTION_SENSOR 2 //Use pin 2 to receive the signal from the module 
#define LED 4 //the Grove - LED is connected to D4 of Arduino


int pushButton = 2;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  Serial.println("hello");
  delay(0.1);        // delay in between reads for stability
  
  if(isPeopleDetected())//if it detects the moving people?
  turnOnLED();
 else
  turnOffLED();
}
void pinsInit()
{
 pinMode(PIR_MOTION_SENSOR, INPUT);
 pinMode(LED,OUTPUT);
}
void turnOnLED()
{
 digitalWrite(LED,HIGH);
}
void turnOffLED()
{
 digitalWrite(LED,LOW);
}
/***************************************************************/
/*Function: Detect whether anyone moves in it's detecting range*/
/*Return:-boolean, ture is someone detected.*/

boolean isPeopleDetected()
{
 int sensorValue = digitalRead(PIR_MOTION_SENSOR);
 if(sensorValue == HIGH)//if the sensor value is HIGH?
 {
  return true;//yes,return ture
  
 }
 else
 {
  return false;//no,return false
  
 }
}
