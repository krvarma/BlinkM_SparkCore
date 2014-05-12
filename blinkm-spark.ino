#include "blinkm.h"

int blinkm_addr = 0x09;
int ledPin = 13;
int r = 255;
int g = 255;
int b = 255;
boolean isBlink = true;

int setrgb(String args){
    Serial.print("Received: ");
    Serial.println(args);
 
    char szArgs[13];
    
    args.toCharArray(szArgs, 12);
    
    sscanf(szArgs, "%d,%d,%d", &r, &g, &b);
    
    Serial.println("Color: ");
    Serial.print(r);
    Serial.print(",");
    Serial.print(g);
    Serial.print(",");
    Serial.print(b);
    Serial.println("");
    
    if(!isBlink){
        BlinkM_fadeToRGB(blinkm_addr, r, g, b);
    }
    
    return 0;
}

int setblink(String args){
    int blink = args.toInt();
    
    
    isBlink = (1 == blink) ? true : false;
    
    if(!isBlink){
        BlinkM_fadeToRGB(blinkm_addr, r, g, b);
    }
    
    Serial.print("Blinking set to: " + isBlink);
}

void setup() {
    Serial.begin(19200); 

    pinMode(ledPin, OUTPUT);
    
    BlinkM_begin();

    delay(100);  // wait for power to stabilize
    
    BlinkM_stopScript(blinkm_addr);
    BlinkM_setRGB(blinkm_addr, r, g, b);

    Spark.function("setcolor", setrgb);
    Spark.function("setblinking", setblink);
}

void loop() {
    if(isBlink){
        BlinkM_fadeToRGB(blinkm_addr, r, g, b);
    
        delay(1000);
    
        BlinkM_fadeToRGB(blinkm_addr, 0, 0, 0);
    
        delay(1000);
    }
}