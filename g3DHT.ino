#include <dht.h>

dht DHT;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int chk = DHT.read11(6);
Serial.println("Ambient temperature = " + String(DHT.temperature)+" deg. C");
Serial.println("Relative humidity   = " + String(DHT.humidity)+" %");
Serial.println("_______________________________");

delay(3000);

}
