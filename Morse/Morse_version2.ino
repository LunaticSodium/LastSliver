void setup() {

public Morse morse(13);
private Morse _morse=morse;
}

class Morse
{
	private int _pin;
	private int _dottime;
  
	public Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=220;
}
	public void dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}
	public void dash()
{
	digitalWrite(_pin,HIGH);
	delay(4*_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}
	public void space()
  {
    delay(2*_dottime);
  }
  
	public void enter()
  {
   	delay(6*_dottime);
 }
	public void numToMorse(int num)
  {
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
	public void chToMorse(int ch)
  {
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
};

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    private String _str=Serial.readString();
    private char[] _chars=_str.toCharArray();
    for(int i=0;i<_chars.length;i++){
      if(_chars[i]>='0'&&_chars[i])<='9'){
        _morse.numToMorse(_chars[i]);
        }
      else if(_chars[i]>='a'&&_chars[i]<='z'||_chars[i]==' '||_chars[i]=='\n'){
        _morse.chToMorse(_chars[i]);
        }
      else Serial.print("Error at "i'\n');
    }
    Serial.print(_str"Done.\n");
  }
}
