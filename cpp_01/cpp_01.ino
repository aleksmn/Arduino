uint8_t a = 1;

void setup() {
  Serial.begin(9600);
  printVars();

}

void loop() {}


void printVars() {
  // Локальная переменная
  int8_t a = 2;
  
  Serial.println(a);

  {
    int8_t a = 3;

    Serial.println(a);
    // Доступ к глобальной переменной
    Serial.println(::a);
  }
  // Доступ к глобальной переменной
  Serial.println(::a);
}