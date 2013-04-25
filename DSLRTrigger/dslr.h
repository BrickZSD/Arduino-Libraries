 /*
  dslr.h - Library for triggering the Canon EOS Rebal 
  Created by Andrew D. Ehrlich, April 11th, 2013
  For questions email at aesound@gmail.com
  v1.0
*/

#ifndef dslr_h
#define dslr_h

#include "Arduino.h"

class dslrClass{
    public:
      /*
        http://playground.arduino.cc/Code/Library
        http://playground.arduino.cc/Main/FunctionLibrary*/
    dslrClass();
    dslrClass();
    dslrClass();
		void canonShoot(unsigned int shutterPin);
		void canonFocas(unsigned int focusPin);
    void canonIr(unsigned int irPin);
        
	private:
    unsigned int irPin;
    unsigned int focusPin;
    unsigned int shutterPin;
		int _irPin;
    int _focusPin;
    int _shutterPin;
};

//extern dslrClass;

#endif