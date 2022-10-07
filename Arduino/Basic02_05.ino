void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int y = 0;
  do {
    Serial.println(y);
    y++;
    delay(1000);
  } while (y<5);
  
}
