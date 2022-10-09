void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2)==LOW) {
    int spd = map(analogRead(A0), 0, 1023, 0, 1000);
    digitalWrite(3, HIGH);
    delay(spd);
    digitalWrite(3, LOW);
    delay(spd);
  }
}
