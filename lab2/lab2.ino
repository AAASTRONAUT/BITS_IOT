#include <ThingSpeak.h>

// const char* ssid = "";      //wifi hotspot id here
// const char* pass = "";      //wifi hotspot password here

unsigned long channelNum = 2267030;
const char* apikey = "GMSFBJKJKT3RFPUF";

const int trigPin = 12; 
const int echoPin = 13;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;

  ThingSpeak.writeField(channelNum , 1 , distance , apikey);
}
