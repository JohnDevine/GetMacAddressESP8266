
#include <ESP8266WiFi.h>

void setup()
{
  // Serial.begin(115200);
  Serial.begin(9600);
  /* Code below does not work .. spita out lots of garbage
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  */

  // wait for serial port to initialise
  delay(2000);
  Serial.println();
  Serial.print("ESP8266 Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
  delay(5000);
}

void loop()
{
  Serial.print("ESP8266 Board MAC Address(loop):  ");
  Serial.println(WiFi.macAddress());
  delay(20000);
}
