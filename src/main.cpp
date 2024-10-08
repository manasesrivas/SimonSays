#include <Arduino.h>
#include <notes.h>


// sol-sol-solb-solb-fa-fa-mi-mi-mib-re


int mute = 1000/30;
int octaba = 1000 / 20;
int pausa = 1000/8;

int16_t silencio = octaba+70;

pentagrama brava[]={
  {G_2,octaba},
  {MUTE, mute},
  {G_2,octaba},
  {MUTE, silencio},
  {Fchart_Gb2,octaba},
  {MUTE, mute},
  {Fchart_Gb2,octaba},
  {MUTE, silencio},
  {F_2,octaba},
  {MUTE, mute},
  {F_2,octaba},
  {MUTE, silencio},
  {E_2,octaba},
  {MUTE, mute},
  {E_2,octaba},
  {MUTE, silencio},
  {Dchart_Eb2,pausa},
  {MUTE, mute},
  {D_2,pausa},
  {MUTE, silencio}

};


byte secuencia[10];
byte valor;

struct simon {
  byte led;
  float note;
};

simon leds[4]{
  {B00100000, G_3},
  {B00010000, F_3}, 
  {B00001000, E_3}, 
  {B00000100, D_3}
};

int8_t level=0;

void setup() {

  Serial.begin(9600);
  // (7-0)
  // para configurar los pines como salida se pone 1 y como entrada 0

  // puerto de escritura
  DDRD = B00111111; // el pin 0 y el pin 1 se configuran como salidas por evitar algun inconveniente con la comunicacion serie
  // (13-8)
  // puerto de lectura
  DDRB = B00000010;
  // 00000110


}



void loop() {


  for(int8_t n=0; n<=level; n++){

    int8_t num = random(0,4);
    secuencia[n]=leds[num].led;

      delay(500);
      PORTD = secuencia[n];
      tone(9, leds[num].note);
      delay(500);
      noTone(9);
      PORTD = 0;

  }

    int8_t temp = 0;
    delay(500);
    PORTD = B00111100;
    delay(100);
    PORTD = 0;


    for(int8_t k=0; k<=level;k++){
      temp=k;
      float tempNote = 0.0;
      while(PINB==0);
      while(PINB!=0){  
        valor = PINB;
        PORTD = valor;
        if(valor==leds[0].led) tone(9, leds[0].note);
        if(valor==leds[1].led) tone(9, leds[1].note);
        if(valor==leds[2].led) tone(9, leds[2].note);
        if(valor==leds[3].led) tone(9, leds[3].note);
        delay(100);
      };

      

      if(valor!=secuencia[k]){

        level=0;
        unsigned long anterior = millis();

        // toca una cancion
        for(int i = 0; i<=19; i++){
            if(millis()-anterior>100){
              PORTD=B00111100;
              anterior=millis();
            }
            tone(9,  brava[i].note, brava[i].tempo);
            delay(brava[i].tempo);
            PORTD=0;
          }

          break;
        }

        PORTD=0;
        noTone(9);    
      }

    // comprueba si se a superado el nivel
    if(valor==secuencia[temp]){
      if(level==9){
        level=9;
        }else{
          level++;
        }
    }
    }



  
  


