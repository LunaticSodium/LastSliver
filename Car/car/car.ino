void setup()
{
  for(int i=5;i<14;i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i,LOW);
  }
      
  Serail.begin(9600);
  
}

void loop()
{
  
	if(Serial.available()>0)
    {
    	income=Serial.read();
      	switch(income)
        {
        	case 'f':
          		forward();
          		break;
          	case 'b':
          		backward();
          		break;
          	case 'l':
          		left();
          		break;
          	case 'r':
          		right();
          		break;
          	case 's':
          		stop();
          		break;
          	default:
          		break;
        }
    }
}
void forward()
{
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
}

void backward()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
}

void left()
{
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);
}

void right()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(7,LOW);
}

void stop()
{
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
}
}
