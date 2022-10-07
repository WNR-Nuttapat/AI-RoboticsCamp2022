int x = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch (x) {
    case 1 :
      Serial.println("Case1");
      break;
    case 2 :
      Serial.println("Case2");
      break;
    case 3 :
      Serial.println("Case3");
      break;
    default:
      Serial.println("No Match");
      break;
  }
  delay(1000);
}
