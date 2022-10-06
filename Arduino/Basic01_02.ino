void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("1) 1+2 = ");    Serial.println(1+2);
  Serial.print("2) 1.0+2 = ");  Serial.println(1.0+2);
  Serial.print("3) 3*2 = ");    Serial.println(3*2);
  Serial.print("4) 3*2.0 = ");  Serial.println(3*2.0);
  Serial.print("5) 5/2 = ");    Serial.println(5/2);
  Serial.print("6) 5.0/2 = ");  Serial.println(5.0/2);
  Serial.print("7) 5%2 = ");  Serial.println(5%2);
  Serial.println(" ");
  delay(1000);
}
