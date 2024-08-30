#include <Arduino.h>

#define pinIN 13

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

  for (int i = 0; i <= 3; i++)
  {
    digitalWrite(leds[i], HIGH);
    delay(500);
  }
  for (int i = 0; i <= 3; i++)
  {
    digitalWrite(leds[i], LOW);
    delay(500);
  }
  
  delay(800);

}

