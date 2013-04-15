/*
  dslr.cpp - Library for triggering the Canon EOS Rebal 
  Created by Andrew D. Ehrlich, April 11th, 2013
  For questions email at aesound@gmail.com
*/

#include "Arduino.h"
#include "dslr_h

dslr::dslr(int irPin)
    {
        pinMode(irPin, OUTPUT);
        _irPin = irPin;
    }
    
dslr::dslr(int focusPin)
    {
        pinMode(focusPin);
        _focusPin = focusPin;
    }
    
dslr::dslr(int shutterPin)
    {
        pinMode(shutterPin);
        _focusPin = focusPin;
    }
    
void dslr::dslrIr()
    {
        digitalWrite(_irPin, HIGH);
        delay(1000);
        digitalWrite(_irPin, LOW);
    }
    
void dslr::dslrFocas()
    {
        digitalWrite(_focusPin, HIGH);
        delay(1000);
        digitalWrite(_focusPin, LOW);
    }
    
void dslr::dslrShoot()
    {
        digitalWrite(_shutterPin, HIGH)
        delay(1000);
        digitalWrite(_shutterPin, LOW);
    }
    
