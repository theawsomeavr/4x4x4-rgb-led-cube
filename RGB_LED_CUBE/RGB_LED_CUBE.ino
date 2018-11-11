#include "FastLED.h"

// How many leds in your pixels?
#define NUM_LEDS 64

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 2

CRGB leds[NUM_LEDS];
const int cube [4][16]={
 {60,61,62,63,44,45,46,47,28,29,30,31,12,13,14,15},
 {59,58,57,56,43,42,41,40,27,26,25,24,11,10,9,8},
 {52,53,54,55,36,37,38,39,20,21,22,23,4,5,6,7},
  {51,50,49,48,35,34,33,32,19,18,17,16,3,2,1,0}
  
};
#include "cuby.h"
void movingpoint2(byte r,byte g,byte b,int timing){
  const int rightcount [16]={12,13,14,15,8,9,10,11,4,5,6,7,0,1,2,3};
  for(int a;a!=16;a++){
    FastLED.clear();
    leds[cube[0][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
    
    leds[cube[1][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
    leds[cube[2][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
    leds[cube[3][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
       
  }}
  void movingpoint(byte r,byte g,byte b,int timing){
  const int rightcount [16]={12,13,14,15,8,9,10,11,4,5,6,7,0,1,2,3};
  for(int a;a!=16;a++){
    FastLED.clear();
    leds[cube[0][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
    FastLED.clear();
    leds[cube[1][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
    FastLED.clear();
    leds[cube[2][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
    FastLED.clear();
    leds[cube[3][rightcount[a]]] = CRGB(r,g,b);
    delay(timing);
    FastLED.show();
       
  }
}
void displayshit(bool a1,bool a2,bool a3,bool a4,bool b1,bool b2,bool b3,bool b4,bool c1,bool c2,bool c3,bool c4,bool d1,bool d2,bool d3,bool d4,byte tu,byte cola,byte uuuuu){
  bool shit[4][4]={{a4,b4,c4,d4},{a3,b3,c3,d3},{a2,b2,c2,d2},{a1,b1,c1,d1}};  
  byte color13[3]={tu,cola,uuuuu};
      for(int a=0;a!=4;a++){
  leds[cube[3][(a*4)+0]] = CRGB::Black;
  leds[cube[3][(a*4)+1]] = CRGB::Black;
  leds[cube[3][(a*4)+2]] = CRGB::Black;
  leds[cube[3][(a*4)+3]] = CRGB::Black;
 
  } 
   FastLED.show();
  for(int a=0;a!=4;a++){
  leds[cube[0][(a*4)+0]] = CRGB(shit[0][a]*color13[0],shit[0][a]*color13[1],shit[0][a]*color13[2]);
  leds[cube[0][(a*4)+1]] = CRGB(shit[1][a]*color13[0],shit[1][a]*color13[1],shit[1][a]*color13[2]);
  leds[cube[0][(a*4)+2]] = CRGB(shit[2][a]*color13[0],shit[2][a]*color13[1],shit[2][a]*color13[2]);
  leds[cube[0][(a*4)+3]] = CRGB(shit[3][a]*color13[0],shit[3][a]*color13[1],shit[3][a]*color13[2]);
 
  } 
   FastLED.show();
  delay(100);
    for(int a=0;a!=4;a++){
  leds[cube[0][(a*4)+0]] = CRGB::Black;
  leds[cube[0][(a*4)+1]] = CRGB::Black;
  leds[cube[0][(a*4)+2]] = CRGB::Black;
  leds[cube[0][(a*4)+3]] = CRGB::Black;

  } 
    FastLED.show();
    for(int a=0;a!=4;a++){
  leds[cube[1][(a*4)+0]] = CRGB(shit[0][a]*color13[0],shit[0][a]*color13[1],shit[0][a]*color13[2]);
  leds[cube[1][(a*4)+1]] = CRGB(shit[1][a]*color13[0],shit[1][a]*color13[1],shit[1][a]*color13[2]);
  leds[cube[1][(a*4)+2]] = CRGB(shit[2][a]*color13[0],shit[2][a]*color13[1],shit[2][a]*color13[2]);
  leds[cube[1][(a*4)+3]] = CRGB(shit[3][a]*color13[0],shit[3][a]*color13[1],shit[3][a]*color13[2]);

  
  } 
    FastLED.show();
  delay(100);
      for(int a=0;a!=4;a++){
  leds[cube[1][(a*4)+0]] = CRGB::Black;
  leds[cube[1][(a*4)+1]] = CRGB::Black;
  leds[cube[1][(a*4)+2]] = CRGB::Black;
  leds[cube[1][(a*4)+3]] = CRGB::Black;
  
  } 
  FastLED.show();
    for(int a=0;a!=4;a++){
  leds[cube[2][(a*4)+0]] = CRGB(shit[0][a]*color13[0],shit[0][a]*color13[1],shit[0][a]*color13[2]);
  leds[cube[2][(a*4)+1]] = CRGB(shit[1][a]*color13[0],shit[1][a]*color13[1],shit[1][a]*color13[2]);
  leds[cube[2][(a*4)+2]] = CRGB(shit[2][a]*color13[0],shit[2][a]*color13[1],shit[2][a]*color13[2]);
  leds[cube[2][(a*4)+3]] = CRGB(shit[3][a]*color13[0],shit[3][a]*color13[1],shit[3][a]*color13[2]);
  
  
  } 
  FastLED.show();
  delay(100);
       for(int a=0;a!=4;a++){
  leds[cube[2][(a*4)+0]] = CRGB::Black;
  leds[cube[2][(a*4)+1]] = CRGB::Black;
  leds[cube[2][(a*4)+2]] = CRGB::Black;
  leds[cube[2][(a*4)+3]] = CRGB::Black;
  
  } 
  FastLED.show();
    for(int a=0;a!=4;a++){
  leds[cube[3][(a*4)+0]] = CRGB(shit[0][a]*color13[0],shit[0][a]*color13[1],shit[0][a]*color13[2]);
  leds[cube[3][(a*4)+1]] = CRGB(shit[1][a]*color13[0],shit[1][a]*color13[1],shit[1][a]*color13[2]);
  leds[cube[3][(a*4)+2]] = CRGB(shit[2][a]*color13[0],shit[2][a]*color13[1],shit[2][a]*color13[2]);
  leds[cube[3][(a*4)+3]] = CRGB(shit[3][a]*color13[0],shit[3][a]*color13[1],shit[3][a]*color13[2]);

  
  } 
    FastLED.show();
  delay(100);
}
void setup() { 
Serial.begin(115200);
      FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
  

}

byte r2;
byte g2;
byte b2;
int countleds;
bool led[63];
int f;
void del(){
  for(int e;e!=64;e++){
        led[e]=0;
       }
}
void loop() { 
 //  randomSeed();


 for(int espera=60;espera!=0;espera-=20){
spin_cuby(255,70,255,espera);
spin_cuby(255,255,0,espera);
spin_cuby(0,102,153,espera);
spin_cuby(255,255,255,espera);
  }
    for(int espera=10;espera!=5;espera-=5){
spin_cuby(255,70,255,espera);
spin_cuby(255,255,0,espera);
spin_cuby(0,102,153,espera);
spin_cuby(255,255,255,espera);
  }
  spin_cuby(255,70,255,1);
spin_cuby(255,255,0,1);
spin_cuby(0,102,153,1);
spin_cuby(255,255,255,1);
for(int oo;oo!=40;oo++){
 //   randomSeed(random());
 int y=random(0,3);
  int x=random(0,3);
  cuby_fall(random(0,255),random(0,255),random(0,255),y-1,x-1,40);
}
for(int oo;oo!=20;oo++){
  //  randomSeed(random());
 int y=random(0,3);
  int x=random(0,3);
  cuby_fall(random(0,255),random(0,255),random(0,255),y-1,x-1,70);
}
   // randomSeed(random());
movingpoint(255,0,0,20);
movingpoint(255,0,255,20);
movingpoint(78,100,80,20);
movingpoint(100,80,60,20);
//movingpoint(random(0,255),random(0,255),random(0,255),20);
 while(1){
     int xxx=random(0,64);
 

if(countleds!=8&&led[xxx]==0){
  
 
  led[xxx]=1;
  countleds++;
  
 leds[xxx] = CRGB(random(0,255),random(0,255),random(0,255));
  FastLED.show();
 delay(100);

  
  }
   if(countleds==8){
      f++;
     FastLED.clear();
     FastLED.show();
       countleds=0;
       
       del();
  }
if(f==8){
 break; 
}
  }
  f=0;
byte culur;
FastLED.clear();
 FastLED.show();
for(int times;times!=5*255;times++){
culur++;
Wheel(culur);
   leds[cube[1][5]] = CRGB(r2,g2,b2);
   leds[cube[1][6]] = CRGB(r2,g2,b2);
   leds[cube[1][9]] = CRGB(r2,g2,b2);
   leds[cube[1][10]] = CRGB(r2,g2,b2);
   leds[cube[2][5]] = CRGB(r2,g2,b2);
   leds[cube[2][6]] = CRGB(r2,g2,b2);
   leds[cube[2][9]] = CRGB(r2,g2,b2);
   leds[cube[2][10]] = CRGB(r2,g2,b2);
 FastLED.show();
 delay(9);
}
FastLED.clear();
 FastLED.show();
for(int times;times!=5*255;times++){
culur++;
Wheel(culur);
   leds[cube[0][15]] = CRGB(r2,g2,b2);
   leds[cube[0][0]] = CRGB(r2,g2,b2);
   leds[cube[0][3]] = CRGB(r2,g2,b2);
   leds[cube[0][12]] = CRGB(r2,g2,b2);
   leds[cube[3][15]] = CRGB(r2,g2,b2);
   leds[cube[3][12]] = CRGB(r2,g2,b2);
   leds[cube[3][0]] = CRGB(r2,g2,b2);
   leds[cube[3][3]] = CRGB(r2,g2,b2);
 FastLED.show();

 delay(9);
}
FastLED.clear();
 FastLED.show();
for(int times;times!=5*255;times++){
culur++;
Wheel(culur);
   leds[cube[1][5]] = CRGB(r2,g2,b2);
   leds[cube[1][6]] = CRGB(r2,g2,b2);
   leds[cube[1][9]] = CRGB(r2,g2,b2);
   leds[cube[1][10]] = CRGB(r2,g2,b2);
   leds[cube[2][5]] = CRGB(r2,g2,b2);
   leds[cube[2][6]] = CRGB(r2,g2,b2);
   leds[cube[2][9]] = CRGB(r2,g2,b2);
   leds[cube[2][10]] = CRGB(r2,g2,b2);
   leds[cube[0][15]] = CRGB(r2,g2,b2);
   leds[cube[0][0]] = CRGB(r2,g2,b2);
   leds[cube[0][3]] = CRGB(r2,g2,b2);
   leds[cube[0][12]] = CRGB(r2,g2,b2);
   leds[cube[3][15]] = CRGB(r2,g2,b2);
   leds[cube[3][12]] = CRGB(r2,g2,b2);
   leds[cube[3][0]] = CRGB(r2,g2,b2);
   leds[cube[3][3]] = CRGB(r2,g2,b2);
 FastLED.show();
 delay(9);
}
FastLED.clear();
 FastLED.show();
}
uint32_t Wheel(byte WheelPos) {
 if(WheelPos < 85) {
   r2=WheelPos * 3;
   g2=255 - WheelPos * 3;
   b2=0;
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   r2=255 - WheelPos * 3;
   g2=0;
   b2=WheelPos * 3;
  } else {
   WheelPos -= 170;
   r2=0; 
   g2=WheelPos * 3;
   b2=255 - WheelPos * 3;
  }}
