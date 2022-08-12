//code provided by the manufacturer
//modified by Rongzhong Li for better demonstration.
//Feb.16, 2021

#include "rgbUltrasonic/RgbUltrasonic.h"

RgbUltrasonic mRUS04(6, 7);//(signal, RGB)
//RgbUltrasonic mRUS04(8, 9);//(signal, RGB)
//The RGB LED ultrasonic module should be plugged in the fourth grove socket with D6, D7

long ultraTimer;
int ultraInterval = 1000;
int distance;
void read_ultrasonic() {
  if  (millis() - ultraTimer > ultraInterval)
  { 
    //|| token == 'k' && millis() - ultraTimer > 3000) {
    
    ultraTimer = millis();
    ultraInterval = 750;
    distance = mRUS04.GetUltrasonicDistance();
    if (distance == 640) {
      return;
    }
      
  }
}

