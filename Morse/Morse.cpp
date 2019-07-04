#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin);
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=220;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(4*_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::space(){
    delay(2*_dottime);
  }

void Morse::enter(){
   	delay(6*_dottime);
 }
 
void Morse::numToMorse(int num){
    switch(num){
      case '0':dash();dash();dash();dash();dash();break;
      case '1':dot();dash();dash();dash();dash();break;
      case '2':dot();dot();dash();dash();dash();break;
      case '3':dot();dot();dot();dash();dash();break;
      case '4':dot();dot();dot();dot();dash();break;
      case '5':dot();dot();dot();dot();dot();break;
      case '6':dash();dot();dot();dot();dot();break;
      case '7':dash();dash();dot();dot();dot();break;
      case '8':dash();dash();dash();dot();dot();break;
      case '9':dash();dash();dash();dash();dot();break;
      default:
    }
}

void Morse::chToMorse(int ch){
    switch(ch){
    	case 'a':dot();dash();break;
    	case 'b':dash();dot();dot();dot();break;
    	case 'c':dash();dot();dash();dot();break;
    	case 'd':dash();dot();dot();break;
   		case 'e':dot();break;
    	case 'f':dot();dot();dash();dot();break;
        case 'g':dash();dash();dot();break;
        case 'h':dot();dot();dot();dot();break;
        case 'i':dot();dot();break;
        case 'j':dot();dash();dash();dash();break;
        case 'k':dash();dot();dash();break;
        case 'l':dot();dash();dot();dot();break;
        case 'm':dash();dash();break;
        case 'n':dot();dash();break;
        case 'o':dash();dash();dash();break;
        case 'p':dot();dash();dash();dot();break;
        case 'q':dash();dash();dot();dash();break;
        case 'r':dot();dash();dot();break;
        case 's':dot();dot();dot();break;
        case 't':dash();break;
        case 'u':dot();dot();dash();break;
        case 'v':dot();dot();dot();dash();break;
        case 'w':dot();dash();dash();break;
        case 'x':dash();dot();dot();dash();break;
        case 'y':dash();dot();dash();dash();break;
        case 'z':dash();dash();dot();dot();break;
        case ' ':space();break;
        case '\n':enter();break;
        default:  
      }
}
