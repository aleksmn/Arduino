void setup() {
  Serial.begin(9600);
  printTypes();

}

void loop() {}

void printTypes() {

  Serial.print(F("sizeof(short int)="));
  Serial.println(sizeof(short int));
  Serial.print(F("sizeof(int8_t)="));
  Serial.println(sizeof(int8_t));
  Serial.print(F("sizeof(long int)="));
  Serial.println(sizeof(long int));
  Serial.print(F("sizeof(void*)="));
  Serial.println(sizeof(void*));


}