int led[] = {3, 4, 5, 6, 7};
int last_i = 0;
void setup(){
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
  }
  pinMode(2, INPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    if (digitalRead(2) == LOW) {
      last_i = i;
    }
    else {
      i = last_i;
    }
    for (int j = 0; j < 5; j++) {
      if (j == i)
        digitalWrite(led[j], HIGH);
      else
        digitalWrite(led[j], LOW);
    }
    delay(analogRead(A0));
  }
}
