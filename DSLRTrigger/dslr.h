/*
  dslr.h - Library for triggering the Canon EOS Rebal 
  Created by Andrew D. Ehrlich, April 11th, 2013
*/

#ifndef dslr_h
#define dslr_h

#include "Arduino.h"

class Canon
{
    public:
		canonIR (int pin);
		canonFocas (int pin);
		canonShutter (int pin);
		void dslrShoot();
		void dslrFocas();
	private:
		int _pin;
};
#endif