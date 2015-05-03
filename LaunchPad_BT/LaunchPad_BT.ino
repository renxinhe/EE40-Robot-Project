void setup()
{
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buf_size = Serial.available();
  if (buf_size > 0) {
    char input = Serial.read();
    if (input == '0') {
      digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, LOW);
    } else if (input == 'U')
      digitalWrite(RED_LED, LOW);
    else if (input == 'D')
      digitalWrite(RED_LED, HIGH);
    else if (input == 'L')
      digitalWrite(GREEN_LED, LOW);
    else if (input == 'R')
      digitalWrite(GREEN_LED, HIGH);
  }
}
