#define leds 4
#define botao 15

int roxinhu[leds] = {2, 0, 16, 5}; 
int rozenha[leds] = {19, 21, 22, 23}; 

void setup() {
  for(int i = 0; i < leds; i++){
    pinMode(roxinhu[i], OUTPUT);
    pinMode(rozenha[i], OUTPUT);
  }
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(botao) == HIGH){
    for (int i = 0; i< leds; i++){
      digitalWrite(roxinhu[i], HIGH);
      digitalWrite(rozenha[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(roxinhu[i], LOW);
      digitalWrite(rozenha[leds - 1 - i], LOW);
    }
  }
  for (int i = 0; i< leds; i++){
    digitalWrite(roxinhu[i], HIGH);
    digitalWrite(rozenha[i], HIGH);
    delay(250);
    digitalWrite(roxinhu[i], LOW);
    digitalWrite(rozenha[i], LOW);
  }

}
