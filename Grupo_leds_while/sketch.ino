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
  int i1 = 0;
  while (digitalRead(botao) == HIGH){
    int i2 = 0;
    while (i2 < leds){
      digitalWrite(roxinhu[i2], HIGH);
      digitalWrite(rozenha[leds - 1 - i2], HIGH);
      delay(250);
      digitalWrite(roxinhu[i2], LOW);
      digitalWrite(rozenha[leds - 1 - i2], LOW);
      
      i2++;
    }
  }
  while (i1 < leds){
    digitalWrite(roxinhu[i1], HIGH);
    digitalWrite(rozenha[i1], HIGH);
    delay(250);
    digitalWrite(roxinhu[i1], LOW);
    digitalWrite(rozenha[i1], LOW);

    i1++;
  }

}