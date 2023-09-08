void setup() {
  Serial.begin(115200);
  

}

void loop() {}



int16_t accumulator(int16_t number) {
  int16_t result;

  result += number;

  return result; 
}