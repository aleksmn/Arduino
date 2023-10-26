const uint8_t LED1 = 1;
const uint8_t LED2 = 2;
const uint8_t LED3 = 3;
const uint8_t LED4 = 4;
const uint8_t LED5 = 5;
const uint8_t LED6 = 6;

void lamp(void) {
  for(uint8_t j=1; j<=6; j++) {
    digitalWrite(j, HIGH);
    delay(400);
  }

  for(uint8_t j=6; j>=1; j--) {
    digitalWrite(j, LOW);
    delay(400);
  }
}

void setup() {
  for(uint8_t i=1; i<=6; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  lamp();
}
