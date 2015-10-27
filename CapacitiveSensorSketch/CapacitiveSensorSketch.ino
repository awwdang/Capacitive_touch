#include "CapacitiveSensor.h"

CapacitiveSensor  cs_4_2 = CapacitiveSensor(4,2);       //2.0 MQ resistor between pin 4 and 2, pin 2 is the sensor pin
CapacitiveSensor  cs_4_6 = CapacitiveSensor(4,6);       //2.0 MQ resistor between pin 4 and 6, pin 6 is the sensor pin
CapacitiveSensor  cs_4_8 = CapacitiveSensor(4,8);       //2.0 MQ resistor between pin 4 and 8, pin 8 is the sensor pin
CapacitiveSensor  cs_4_10 = CapacitiveSensor(4,10);

void setup() {
  // put your setup code here, to run once:
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);              // turn off autocalibrate on channel 1 as example
  Serial.begin(9600);   
}

void loop() {
  long start = millis();
  long total1 = cs_4_2.capacitiveSensor(30);
  long total2 = cs_4_6.capacitiveSensor(30);
  long total3 = cs_4_8.capacitiveSensor(30);
  long total4 = cs_4_10.capacitiveSensor(30);

  Serial.print(millis() - start);
  Serial.print("\t");

  Serial.print(total1);
  Serial.print("\t");
 
  Serial.print(total2);
  Serial.print("\t");
  
  Serial.print(total3);
  Serial.print("\t");
  
  Serial.println(total4);
  delay(250);
  
  // put your main code here, to run repeatedly:

}
