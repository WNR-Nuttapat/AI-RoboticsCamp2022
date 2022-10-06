bool status1 = 0;
bool status2 = LOW;
byte val1 = 150 , val2 = 260;
char ch1 = 'A'; char ch2 = 65;
int val3 = 70000; int val4 = 900; float val5 = 22.0/7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(status1); Serial.print(' '); Serial.println(status2);
  Serial.print(val1); Serial.print(' '); Serial.println(val2);
  Serial.print(ch1); Serial.print(' '); Serial.println(ch2);
  Serial.print(val3); Serial.print(' '); Serial.println(val4);
  Serial.println(val5);
  int val3=500;
  Serial.println(val3);   
  delay(1000);
}
