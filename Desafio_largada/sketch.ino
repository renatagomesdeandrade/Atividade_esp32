const int prestageLeds[] = {2, 0};
const int stageLeds[] = {4, 5};
const int ledsLargada[] = {15,16,17,18};
const int numLedsPS = sizeof(prestageLeds) / sizeof(prestageLeds[0]);
const int numLedsS = sizeof(stageLeds) / sizeof(stageLeds[0]);
const int numLedsL = sizeof(ledsLargada) / sizeof(ledsLargada[0]);
const int delayLeds = 1000;
const int delayFim = 5000;

void setup() {
  for (int i = 0; i < numLedsPS; i++){
    pinMode(prestageLeds[i], OUTPUT);
    digitalWrite(prestageLeds[i], HIGH);
    delay(delayLeds);
  }

  for (int i = 0; i < numLedsS; i++){
    pinMode(stageLeds[i], OUTPUT);
    digitalWrite(stageLeds[i], HIGH);
    delay(delayLeds);
  }

  for (int i = 0; i < numLedsL; i++){
    pinMode(ledsLargada[i], OUTPUT);
  }

  for (int i = 0; i < numLedsL; i++){
    digitalWrite(ledsLargada[i], HIGH);
     if (i == 3){
       delay(delayLeds);
       for (int i = 0; i < 2; i++){
         digitalWrite(prestageLeds[i], LOW);
         digitalWrite(stageLeds[i], LOW);
       }
       break;
     }
    delay(delayLeds);
    digitalWrite(ledsLargada[i], LOW);
  }

  delay(delayFim);
  digitalWrite(ledsLargada[3], LOW);
}

void loop() {

}
