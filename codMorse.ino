int ledPin = 13;

char* letras[]={ //array de letras
  ".-", "-...", "-.-.", "-..", ".",     
  "..-.", "--.", "....", "..", ".---",  
  "-.-", ".-..", "--", "-.", "---",     
  ".-.", "--.-", ".-.", "...", "-", 
  "..-", "...-", ".--", "-..-", "-.--", 
  "--.."
};

char* numeros[]={  //array de números
  "-----", ".----", "..----", "...--", "....-", 
  ".....", "-....", "--...", "---..", "----."
};

int pontDelay = 100;

void flashSequencia(char* sequencia){
  int i = 0;
  while(sequencia[i] != NULL){
    flashPontoOuTraco(sequencia[i]);
    i++;
  }
  delay(pontDelay*3);
}

void flashPontoOuTraco(char pontoOuTraco){
  digitalWrite(ledPin, HIGH);
  if (pontoOuTraco=="."){
    delay(pontDelay);
  }else{
    delay(pontDelay*6);
  }
  digitalWrite(ledPin, LOW);
  delay(pontDelay);  
}

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
 


void loop(){
 char ch;
 if(Serial.available()){
  ch=Serial.read();
  if(ch>='a' && ch<='z'){
     flashSequencia(letras[ch-'a']);
  }else if(ch>='A' && ch<='Z'){
    flashSequencia(letras[ch-'A']);
  }else if(ch>='0' && ch<='9'){
    flashSequencia(numeros[ch-'0']);
  }else if(ch==' '){
    delay(pontDelay*4);
  }
 }
}
