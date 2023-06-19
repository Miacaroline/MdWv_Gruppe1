/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground through 220 ohm resistor

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogInOutSerial
*/
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
//#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
//const int analogOutPin = 9; // Analog output pin that the LED is attached to

//const char* ssid ="Mia iPhone"; //SSID vom Wifi Netzwerk
const char* ssid ="ShellyPlusPlugS-80646FD1F544";
//const char* password = "12345678!0"; //password

const char* host = "";
const int httpsPort = 443;
char shelly[] = "192.168.33.1"; //http vom selly

int sensorValue = 0;        // value read from the pot
//int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  WiFi.begin(ssid); 
}

void loop() {
  WiFiClient client; 
//  HTTPClient http;
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
 // outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  //analogWrite(analogOutPin, outputValue);
  // print the results to the Serial Monitor:
   if(sensorValue > 200){
    
    if(client.connect(shelly, 80)){
    client.println("GET /relay/0?turn=on HTTP/1.1");
    client.println();
    //client.disconnect();
    };
    Serial.println("Somebody is in this area!");
    
   } else { 
    if(client.connect(shelly, 80)){
    //Serial.println("connected to Shelly");
    client.println("GET /relay/0?turn=off HTTP/1.1");
    client.println();
    //client.disconnect();
    };
    Serial.println("No one!");
  
    };
    delay(1000);
  
 Serial.print("sensor = ");
 Serial.println(sensorValue);
 // Serial.print("Verbunden mit ");
 // Serial.println(ssid);
  //Serial.println("\t output = ");
  //Serial.println(outputValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  //WiFi.printDiag(Serial); prüfen ob Wlan von Octopus zu Shelly vorhanden
  delay(200);
}
