#define led 21
#define botao 0

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(botao) == LOW){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
