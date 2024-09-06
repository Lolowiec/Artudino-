int licznik = 1;

void setup() {
  Serial.begin(115200);

  while (!Serial) {
    ;
  }

  Serial.println("Hello World 1");
}

void loop() {
  delay(1000);

  licznik++;

  Serial.print("Hello World ");
  Serial.println(licznik);
}
