void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(1);
  Serial.print('2');
  Serial.print(34);
  Serial.println("56");
  delay(500);
  Serial.println("HelloWorld");
  delay(1500);
}
