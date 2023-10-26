const uint8_t BUZZER = 12;
const uint8_t LED = 11;
const uint8_t BTN = 2;


void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);

}

void loop() {
  // digitalWrite(BUZZER, !digitalRead(BTN));
  // digitalWrite(LED, !digitalRead(BTN));
  // delay(200);

  while(!digitalRead(BTN)) {
    for(uint8_t i=1; i<80; i++) {
      digitalWrite(BUZZER, 1);
      delay(1);
      digitalWrite(BUZZER, 0);
      delay(1);
    }

    for(uint8_t i=0; i<100; i++) {
      digitalWrite(BUZZER, 1);
      digitalWrite(LED, 1);
      delay(4);
      digitalWrite(BUZZER, 0);
      digitalWrite(LED, 0);
      delay(4);
    }
    for(uint8_t i=2; i<80; i++) {
      digitalWrite(BUZZER, 1);
      delay(3);
      digitalWrite(BUZZER, 0);
      delay(3);
    }
  }
  

}
