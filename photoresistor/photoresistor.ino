uint16_t light;
const uint8_t BUZZER = 12;



void setup() {
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  light = analogRead(0);
  // Serial.println(light);
  delay(100);

  if (light < 180) {
    Serial.println("BZZzz");
    digitalWrite(BUZZER, 1);
  }
  else {
    digitalWrite(BUZZER, 0);
    Serial.println(light);

  }
}
