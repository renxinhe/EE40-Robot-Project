void setup()
{
  // put your setup code here, to run once:
  pinMode(PUSH2, INPUT_PULLUP);
  pinMode(P1_4, OUTPUT);
  pinMode(P1_5, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  digitalWrite(P1_4, LOW);
  digitalWrite(P1_5, LOW);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
//  if (digitalRead(P1_4) == HIGH && digitalRead(P1_5) == HIGH) {
//    digitalWrite(P1_4, LOW);
//    digitalWrite(P1_5, LOW);
//  }
  
  if (digitalRead(PUSH2) == HIGH) {
    digitalWrite(P1_4, HIGH);
    digitalWrite(P1_5, LOW);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  } else {
    digitalWrite(P1_4, LOW);
    digitalWrite(P1_5, HIGH);
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }
}
