const int ledPins[] = {2, 4, 5};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int espera = 500;


void setup() {
  for (int i = 0; i < numLeds; i++){
    pinMode(ledPins[i], OUTPUT);
  }

}

void loop() {
  int randomX = random(numLeds);
  digitalWrite(ledPins[randomX], HIGH);
  delay(espera);
  digitalWrite(ledPins[randomX], LOW);
  delay(espera);
}
