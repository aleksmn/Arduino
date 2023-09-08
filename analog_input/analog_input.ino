void setup() {
  Serial.begin(9600);

}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  

  // if (sensorValue > 1000) {
  //   Serial.println("MORE THEN 1000");
  // }
  // else {
  //   Serial.println("LESS THEN 1000");
  // }

  delay(1);
}
