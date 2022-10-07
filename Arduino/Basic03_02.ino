void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool button = digitalRead(6);
  Serial.print("ButtonStatus : ");
  Serial.println(button);
  delay(1000);
}
