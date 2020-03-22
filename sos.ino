int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void flash(int pin, int duracao){
  digitalWrite(pin, HIGH);
  delay(duracao);
  digitalWrite(pin, LOW);
  delay(duracao);
}

void loop(){
  delay(2000);
  //primeiro s
  flash(ledPin,200);
  flash(ledPin,200);
  flash(ledPin,200);
  //letra 0
  flash(ledPin,500);
  flash(ledPin,500);
  flash(ledPin,500);
  //segundo s
  flash(ledPin,200);
  flash(ledPin,200);
  flash(ledPin,200);
  
}
/*
void loop()
{
  //S (...) O (---) S (...)
  digitalWrite(ledPin, HIGH);
  //S(...) Primeiro ponto
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
  digitalWrite(ledPin, HIGH);
  //Segundo ponto
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
  digitalWrite(ledPin, HIGH);
  //Terceiro ponto
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
  digitalWrite(ledPin, HIGH);
  
  //O(---) Primeiro traço
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  //Segundo traço
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  //Terceiro traço
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(500);

  //S(...) Primeiro ponto
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
  digitalWrite(ledPin, HIGH);
  //Segundo ponto
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
  digitalWrite(ledPin, HIGH);
  //Terceiro ponto
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
  digitalWrite(ledPin, HIGH);
}*/
