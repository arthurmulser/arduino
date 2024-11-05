#include "DHTStable.h"

DHTStable DHT_A;

#define DHT11_PIN_A       7

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  Serial.print("DHT A:\t");
  DHT_A.read11(DHT11_PIN_A);
  Serial.print(DHT_A.getHumidity());
  Serial.print(",\t");
  Serial.println(DHT_A.getTemperature());
  delay(30000);
}