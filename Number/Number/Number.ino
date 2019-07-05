void setup()
{
  for(int i=8;i<12;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void SerialJudge(int pinnum,int fact)
{
  if(fact==1){
    pinMode(pinnum,HIGH);
  }
  else{
    pinMode(pinnum,LOW);
  }
}

void loop()
{
  if(Serial.available()>0)
  {
    int num=Serial.read()-48;
    int fact=0;
    int ad=8,pinnum=8;
    for(int i=0;i<4;ad=ad/2,pinnum++,i++)
    {
      fact=num/ad;
      num=num%ad;
      SerialJudge(pinnum,fact);
    }
    delay(3000);
  }    
}
