//declaração de variáveis
const int led1 = 12;
const int led2 = 11;
const int led3 = 10;
const int led4 = 9;
const int ch1 = 5;
const int ch2 = 6;
const int ch3 = 7;
const int ch4 = 8;
const int tom =4; 

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(tom, OUTPUT);
  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);
  pinMode(ch3, INPUT);
  pinMode(ch4, INPUT);
}

void loop()
{
  if(digitalRead(ch1)==LOW){
    tone(tom, 1000, 100);
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  
  if(digitalRead(ch2)==LOW){
    tone(tom, 1500, 100);
    digitalWrite(led1, LOW); 
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  
  if(digitalRead(ch3)==LOW){
    tone(tom, 2000, 100);
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
  }
  
  if(digitalRead(ch4)==LOW){
    tone(tom, 2500, 100);
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
  }
}
