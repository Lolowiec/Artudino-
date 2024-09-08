int counter = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  std::String message_template = "Hello World";

  for (int i = 0; i < message_template.length(); i++) {
    Serial.print(message_template[i]); 
    if (i < message_template.length() - 1) {
      Serial.print(",");  
    }
  }
  
  Serial.println();

  counter += 1;
  delay(1000);
}
