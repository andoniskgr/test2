#include <Arduino.h>
#include <EEPROM.h>


const int inputPin=4;
//bool pulse = false;
int countPulses=0;

void setup() {
  Serial.println(EEPROM.length());
 for (int i = 0; i < EEPROM.length(); i++)
 {
  if (EEPROM.read(i)!=0)
  {
    Serial.print("Address "+String(i)+" is:");
    Serial.println(EEPROM.read(i));
  }
    Serial.print("Address scanning end");
  
  
  
  
  delay(10);
 }
 
  
}

void loop() {
  // put your main code here, to run repeatedly:
}