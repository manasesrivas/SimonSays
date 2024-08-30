#include <Arduino.h>

#define pinIN 13
int8_t num, numPrev;

const int leds[4]={
  2,3,4,5
};

void setup() {

  for (int i = 0; i <= 3; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
  


}

void loop() {

  numPrev = num;
  num = random(0,4);

  if(num!=numPrev){
    digitalWrite(leds[num], HIGH);
    delay(500);
    digitalWrite(leds[num], LOW); 
    delay(500); 
  }
  
  
}

