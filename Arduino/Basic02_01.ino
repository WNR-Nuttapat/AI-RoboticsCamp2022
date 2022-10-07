int level = 65;
bool error = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Water Level : ");
  if (level >= 66 && !error) {
    Serial.println("HIGH");
  }
  else if (level >= 33 && !error) {
    Serial.println("MEDIUM");
  }
  else if (level >= 0 && !error) {
    Serial.println("LOW");
  }
  else {
    Serial.println("ERROR");
  }
}
