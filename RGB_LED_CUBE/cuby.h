int cordenada[3];

void cuby_go (int x,int y,int z,byte r,byte g,byte b){
   FastLED.clear();
   cordenada[0]=x;
   cordenada[1]=y;
   cordenada[2]=z;
   leds[cube[1+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   
   
    FastLED.show();
}
void cuby_center (byte r,byte g,byte b){
   FastLED.clear();
   leds[cube[1][5]] = CRGB(r,g,b);
   leds[cube[1][6]] = CRGB(r,g,b);
   leds[cube[1][9]] = CRGB(r,g,b);
   leds[cube[1][10]] = CRGB(r,g,b);
   leds[cube[2][5]] = CRGB(r,g,b);
   leds[cube[2][6]] = CRGB(r,g,b);
   leds[cube[2][9]] = CRGB(r,g,b);
   leds[cube[2][10]] = CRGB(r,g,b);
   cordenada[0]=0;
   cordenada[1]=0;
   cordenada[2]=0;
   
    FastLED.show();
}
void cuby_move_up (byte r,byte g,byte b){
if(cordenada[0]!=-1){
cordenada[0]--;  
}


  /* cordenada[1]=0;
   cordenada[2]=0;*/
    FastLED.clear();
   leds[cube[1+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
    FastLED.show();
}
void cuby_move_front  (byte r,byte g,byte b){
if(cordenada[2]!=1){
cordenada[2]++;  
}


  /* cordenada[1]=0;
   cordenada[2]=0;*/
    FastLED.clear();
   leds[cube[1+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
    FastLED.show();
}
void cuby_move_back(byte r,byte g,byte b){
if(cordenada[2]!=-1){
cordenada[2]--;  
}


  /* cordenada[1]=0;
   cordenada[2]=0;*/
    FastLED.clear();
   leds[cube[1+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
    FastLED.show();
}
void cuby_move_down (byte r,byte g,byte b){
if(cordenada[0]!=1){
cordenada[0]++;  
}


  /* cordenada[1]=0;
   cordenada[2]=0;*/
    FastLED.clear();
   leds[cube[1+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
    FastLED.show();
}
void cuby_move_right (byte r,byte g,byte b){
if(cordenada[1]!=1){
cordenada[1]++;  
}


  /* cordenada[1]=0;
   cordenada[2]=0;*/
    FastLED.clear();
   leds[cube[1+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
    FastLED.show();
}
void cuby_move_left (byte r,byte g,byte b){
if(cordenada[1]!=-1){
cordenada[1]--;  
}


  /* cordenada[1]=0;
   cordenada[2]=0;*/
    FastLED.clear();
   leds[cube[1+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[1+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][5+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][6+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][9+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
   leds[cube[2+(cordenada[2]*1)][10+(cordenada[0]*4)+(cordenada[1]*1)]] = CRGB(r,g,b);
    FastLED.show();
}
void spin_cuby(byte r,byte g,byte b,int retardo){
  cuby_go (-1,-1,1,r,g,b); 
delay(retardo);
cuby_move_back(r,g,b);
delay(retardo);
cuby_move_back(r,g,b);
delay(retardo);
cuby_move_right(r,g,b);
delay(retardo); 
cuby_move_right(r,g,b);
delay(retardo); 
cuby_move_front(r,g,b);
delay(retardo); 
cuby_move_front(r,g,b);
delay(retardo); 
cuby_move_left(r,g,b);
delay(retardo); 
cuby_move_left(r,g,b);
delay(retardo);  
cuby_move_down(r,g,b); 
delay(retardo); 
cuby_move_back(r,g,b);
delay(retardo);
cuby_move_back(r,g,b);
delay(retardo);
cuby_move_right(r,g,b);
delay(retardo); 
cuby_move_right(r,g,b);
delay(retardo); 
cuby_move_front(r,g,b);
delay(retardo); 
cuby_move_front(r,g,b);
delay(retardo); 
cuby_move_left(r,g,b);
delay(retardo); 
cuby_move_left(r,g,b);
delay(retardo); 
cuby_move_down(r,g,b); 
delay(retardo); 
cuby_move_back(r,g,b);
delay(retardo);
cuby_move_back(r,g,b);
delay(retardo);
cuby_move_right(r,g,b);
delay(retardo); 
cuby_move_right(r,g,b);
delay(retardo); 
cuby_move_front(r,g,b);
delay(retardo); 
cuby_move_front(r,g,b);
delay(retardo); 
cuby_move_left(r,g,b);
delay(retardo); 
cuby_move_left(r,g,b);
delay(retardo); 
}
void cuby_fall(byte r,byte g,byte b,int x,int y,int retardo){
  cuby_go (-1,y,x,r,g,b); 
delay(retardo);
cuby_move_down(r,g,b); 
delay(retardo); 
cuby_move_down(r,g,b); 
delay(retardo); 

}
void cuby_go_down (byte r,byte g,byte b,int retardo){
cuby_move_down(r,g,b); 
delay(retardo); 
cuby_move_down(r,g,b); 
delay(retardo);   
}

