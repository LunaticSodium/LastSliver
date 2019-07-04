void setup() {
  // put your setup code here, to run once:
  
public Morse morse(13);
private Morse _morse=morse;
}

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
