int y = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (y < 10) {
    Serial.println(y);
    y++;
    delay(1000);
  }
}
