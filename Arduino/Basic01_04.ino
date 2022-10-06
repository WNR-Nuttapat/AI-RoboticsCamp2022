int number1[4];
int number2[]={10,20,30,40};
char text[]="HelloWorld";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(number2[3]); Serial.println(number2[1]);
  Serial.println(number2[2]); Serial.println(number2[0]); 
  Serial.println(text);
  Serial.print(text[1]); Serial.println(text[8]);
  Serial.println(" ");
  delay(1000);
}
