/*
  dslr.cpp - Library for triggering the Canon EOS Rebal 
  Created by Andrew D. Ehrlich, April 11th, 2013
  For questions email at aesound@gmail.com
  v1.0
*/

#include "Arduino.h"
#include "dslr.h"

dslrClass::dslrClass (unsigned int irPin)
    {
        pinMode(irPin, OUTPUT);
        irPin = 0;
        _irPin = irPin;
    }
    
dslrClass::dslrClass (unsigned int focusPin)
    {
        pinMode(focusPin, OUTPUT);
        focusPin = 0;
        _focusPin = focusPin;
    }
    
dslrClass::dslrClass (unsigned int shutterPin)
    {
        pinMode(shutterPin, OUTPUT);
        shutterPin = 0;
        _shutterPin = shutterPin;
    }

void dslrClass::canonIr()
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
    
void dslrClass::canonFocas()
    {
        digitalWrite(_focusPin, HIGH);
        delay(1000);
        digitalWrite(_focusPin, LOW);
    }
    
void dslrClass::canonShoot()
    {
        digitalWrite(_shutterPin, HIGH)
        delay(1000);
        digitalWrite(_shutterPin, LOW);
    }
    
