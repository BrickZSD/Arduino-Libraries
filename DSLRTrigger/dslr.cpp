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
void dslr::dslrShoot()
    {
        digitalWrite(_irPin, HIGH);
        digitalWrite(_focusPin, HIGH);
        digitalWrite(_shutterPin, HIGH);
    }

void dslr::dslrFocas()
    {
        digitalWrite(_irPin, LOW);
        digitalWrite(_focusPin, LOW);
        digitalWrite(_shutterPin, LOW);
    }
 