 /*
  dslr.h - Library for triggering the Canon EOS Rebal 
  Created by Andrew D. Ehrlich, April 11th, 2013
  For questions email at aesound@gmail.com
  v1.0
*/

#ifndef dslr_h
#define dslr_h

#include "Arduino.h"

class dslr
{
    public:
    
		/*IR (int irPin);
		Focus (int focusPin);
		Shutter (int shutterPin);
        http://playground.arduino.cc/Code/Library*/
        irPin();
        ~irPin();
        focusPin
        ~focusPin();
        shutterPin();
        ~shutterPin();
		void canonShoot();
		void canonFocas();
    void canonIr();
        
	private:
		int _irPin;
    int _focusPin;
    int _shutterPin;
};
#endif