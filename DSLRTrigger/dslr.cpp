/*
  dslr.cpp - Library for triggering the Canon EOS Rebal 
  Created by Andrew D. Ehrlich, April 11th, 2013
  For questions email at aesound@gmail.com
  v1.0
*/

#include "Arduino.h"
#include "dslr_h"

dslr::dslr(int irPin)
    {
        pinMode(irPin, OUTPUT);
        _irPin = irPin;
    }
    
dslr::dslr(int focusPin)
    {
        pinMode(focusPin, OUTPUT);
        _focusPin = focusPin;
    }
    
dslr::dslr(int shutterPin)
    {
        pinMode(shutterPin, OUTPUT);
        _focusPin = focusPin;
    }
    
void dslr::canonIr()
    {
    //Infrared Trigger
    for(int i=0; i<16; i++) { 
        digitalWrite(_irPin, HIGH);
        delayMicroseconds(11);
        digitalWrite(_irPin, LOW);
        delayMicroseconds(11);
   }
   
    delayMicroseconds(7330);
    
    for(int i=0; i<16; i++) { 
        digitalWrite(_irPin, HIGH);
        delayMicroseconds(11);
        digitalWrite(_irPin, LOW);
        delayMicroseconds(11);
   }
}
    
void dslr::canonFocas()
    {
        digitalWrite(_focusPin, HIGH);
        delay(1000);
        digitalWrite(_focusPin, LOW);
    }
    
void dslr::canonShoot()
    {
        digitalWrite(_shutterPin, HIGH)
        delay(1000);
        digitalWrite(_shutterPin, LOW);
    }
    
