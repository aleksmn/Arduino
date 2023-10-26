const int8_t LED = 12;
const int8_t BTN = 2;

const uint32_t DOT = 100;
const uint32_t DASH = 500;
const uint32_t PAUSE = 500;


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  // digitalWrite(LED, ! digitalRead(BTN));
  if (! digitalRead(BTN)) {
    sos();
  }
}

void blink(uint32_t pulse, uint32_t pause) {
  digitalWrite(LED, 1);
  delay(pulse);
  digitalWrite(LED, 0);
  delay(pause);
}


void sos() {

  for(uint8_t i = 0; i < 3; i++) {
    blink(DOT, PAUSE);
  }

  for(uint8_t i = 0; i < 3; i++) {
    blink(DASH, PAUSE);
  }

  for(uint8_t i = 0; i < 3; i++) {
    blink(DOT, PAUSE);
  }

}
