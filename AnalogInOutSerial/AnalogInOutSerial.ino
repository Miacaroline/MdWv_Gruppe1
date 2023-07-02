
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <WiFiClient.h>

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to



const char* ssid ="ShellyPlusPlugS-80646FD1F544"; //SSID vom Shelly Netzwerk


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
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // print the results to the Serial Monitor:
   if(sensorValue > 200){ //wir setzten den Wert des Sensors auf 200
    
    if(client.connect(shelly, 80)){
    client.println("GET /relay/0?turn=on HTTP/1.1"); //Shelly anschalten
    client.println();
    };
    Serial.println("Somebody is in this area!");
    
   } else { 
    if(client.connect(shelly, 80)){
    //Serial.println("connected to Shelly"); > prüfen ob das der Sensor mitder Shelly verbunden ist
    client.println("GET /relay/0?turn=off HTTP/1.1"); //Shelly ausschalten
    client.println();
    };
    Serial.println("No one!");
  
    };
    delay(1000);
  
 Serial.print("sensor = ");
 Serial.println(sensorValue);
 //folgender Abschnitt ist zum testen der Netzwerkverbindung
 // Serial.print("Verbunden mit ");
 // Serial.println(ssid);
  //Serial.println("\t output = ");
  //Serial.println(outputValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  //WiFi.printDiag(Serial); prüfen ob Wlan von Octopus zu Shelly vorhanden
  delay(200);
}
