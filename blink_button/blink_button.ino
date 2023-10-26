const uint8_t LED = 11;
const uint8_t BTN = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {

  digitalWrite(LED, !digitalRead(BTN));
  // delay(200);

}
