const int botaopin = 2;
int botaostatus = 0;


void setup() {
 pinMode(13, OUTPUT);
 pinMode(botaopin, INPUT_PULLUP);
}

void loop() {
  botaostatus = digitalRead(botaopin);

  if(botaostatus == HIGH) {
    digitalWrite(13, HIGH);
    delay(10000);
    
  } else{
    digitalWrite(13, LOW);
  }
}