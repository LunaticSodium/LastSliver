#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
	public:
		Morse(int pin);
		void dot();
		void dash();
		void space();
		void enter();
		void numToMorse(int num);
		void chToMorse(int ch);
	private:
		int _pin;
		int _dottime;
};

#endif //"Morse_h"
