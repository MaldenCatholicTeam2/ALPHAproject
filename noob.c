#include "HyperDisplay_UG2856KLBAG01.h"   
#define SERIAL_PORT Serial  
#define WIRE_PORT Wire      

UG2856KLBAG01_I2C myTOLED; 
uint8_t color = 0x01;
uint8_t noColor = 0x00;




void setup() {
    
    Serial.begin(9600);
    Serial.println(F("Example4_Text: Transparent Graphical OLED"));
    WIRE_PORT.begin();
    myTOLED.begin(WIRE_PORT, false, SSD1309_ARD_UNUSED_PIN);  
    Wire.setClock(400000);
}

void loop() {

  //myTOLED.pixelSet(126,2);
  //delay(1000);

  //myTOLED.pixelClear(126,2);
  //delay(1000);

  app_center1();
  app_center2();
  app_center3();
  app_center4();
  delay(1000);
  
  
  
  
  
}




void app_center1( void ){

    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 35;//2
    y0 = 33;
    x1 = 46;//2
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true);


    myTOLED.pixelSet(40, 37); myTOLED.pixelSet(41, 37);
    myTOLED.pixelSet(40, 38); myTOLED.pixelSet(41, 38);
    myTOLED.pixelSet(40, 40); myTOLED.pixelSet(41, 40);
    myTOLED.pixelSet(40, 41); myTOLED.pixelSet(41, 41);
    myTOLED.pixelSet(40, 42); myTOLED.pixelSet(41, 42);
    myTOLED.pixelSet(40, 43); myTOLED.pixelSet(41, 43);
    myTOLED.pixelSet(40, 44); myTOLED.pixelSet(41, 44);
    myTOLED.pixelSet(40, 45); myTOLED.pixelSet(41, 45);
    myTOLED.pixelSet(40, 46); myTOLED.pixelSet(41, 46);
    myTOLED.pixelSet(40, 47); myTOLED.pixelSet(41, 47);
    myTOLED.pixelSet(40, 48); myTOLED.pixelSet(41, 48); myTOLED.pixelSet(42, 48); myTOLED.pixelSet(43, 48);
   
}


void app_center2( void ){
    
    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 50;
    y0 = 33;
    x1 = 61;
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true);

    //myTOLED.pixelSet(51, 36); myTOLED.pixelSet(52, 36); 
    //myTOLED.pixelSet(53, 37);
    //myTOLED.pixelSet(52, 38);
    myTOLED.pixelSet(55, 39);
    myTOLED.pixelSet(55, 40);
    myTOLED.pixelSet(55, 41);
    myTOLED.pixelSet(55, 42);
    myTOLED.pixelSet(55, 43);
    myTOLED.pixelSet(55, 44);
    myTOLED.pixelSet(56, 45);
    myTOLED.pixelSet(57, 46);
    myTOLED.pixelSet(57, 47);
    myTOLED.pixelSet(57, 48);
    myTOLED.pixelSet(58, 49);
    myTOLED.pixelSet(59, 49);
}

void app_center3( void ){

    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 65;
    y0 = 33;
    x1 = 76;
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true); 

    myTOLED.pixelSet(66, 40); myTOLED.pixelSet(67, 40); myTOLED.pixelSet(68, 40);//////////////lines 134-139 are for the letter "P"
    myTOLED.pixelSet(69, 41); myTOLED.pixelSet(69, 42);
    myTOLED.pixelSet(68, 43); myTOLED.pixelSet(67, 43); myTOLED.pixelSet(66, 43);
    myTOLED.pixelSet(66, 44);
    myTOLED.pixelSet(66, 45);
    myTOLED.pixelSet(66, 46);
    
    myTOLED.pixelSet(71, 40);/////////////////////////lines 141-147 are for the letter "I"
    myTOLED.pixelSet(71, 41);
    myTOLED.pixelSet(71, 42);
    myTOLED.pixelSet(71, 43);
    myTOLED.pixelSet(71, 44);
    myTOLED.pixelSet(71, 45);
    myTOLED.pixelSet(71, 46);
    
    myTOLED.pixelSet(73, 40); myTOLED.pixelSet(74, 40); myTOLED.pixelSet(75, 40);///////////////lines 149-151 are for the letter "C"
    myTOLED.pixelSet(73, 41); myTOLED.pixelSet(73, 42); myTOLED.pixelSet(73, 43); myTOLED.pixelSet(73, 44); myTOLED.pixelSet(73, 45); myTOLED.pixelSet(73, 46);
    myTOLED.pixelSet(74, 46); myTOLED.pixelSet(75, 46);
    
    
  
}

void app_center4( void ){

    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 80;
    y0 = 33;
    x1 = 91;
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true);

    myTOLED.pixelSet(82, 43); myTOLED.pixelSet(83, 43); myTOLED.pixelSet(84, 43); myTOLED.pixelSet(85, 43); myTOLED.pixelSet(86, 43); myTOLED.pixelSet(87, 43); myTOLED.pixelSet(88, 43); myTOLED.pixelSet(89, 43);
    myTOLED.pixelSet(82, 44); myTOLED.pixelSet(89, 44);
    myTOLED.pixelSet(82, 45); myTOLED.pixelSet(87, 45); myTOLED.pixelSet(89, 45);
    myTOLED.pixelSet(82, 46); myTOLED.pixelSet(85, 46); myTOLED.pixelSet(89, 46);
    myTOLED.pixelSet(82, 47); myTOLED.pixelSet(84, 47); myTOLED.pixelSet(89, 47); myTOLED.pixelSet(86, 47);
    myTOLED.pixelSet(82, 48); myTOLED.pixelSet(85, 48); myTOLED.pixelSet(87, 48); myTOLED.pixelSet(89, 48);
    myTOLED.pixelSet(82, 49); myTOLED.pixelSet(89, 49);
    myTOLED.pixelSet(82, 50); myTOLED.pixelSet(83, 50); myTOLED.pixelSet(84, 50); myTOLED.pixelSet(85, 50); myTOLED.pixelSet(89, 50); myTOLED.pixelSet(86, 50); myTOLED.pixelSet(87, 50); myTOLED.pixelSet(88, 50); myTOLED.pixelSet(89, 50);

}
