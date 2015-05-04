const int LEFT_L = P1_4;
const int LEFT_R = P1_5;
const int RIGHT_L = P2_5;
const int RIGHT_R = P2_4;

void setup()
{
  // put your setup code here, to run once:
  pinMode(LEFT_L, OUTPUT);
  pinMode(LEFT_R, OUTPUT);
  pinMode(RIGHT_L, OUTPUT);
  pinMode(RIGHT_R, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (shortCircuit())
    stopAll;
    
  int buf_size = Serial.available();
  if (buf_size > 0) {
    char input = Serial.read();
    if (input == '0') {
      stopAll();
      digitalWrite(RED_LED, HIGH);
      digitalWrite(GREEN_LED, LOW);
    } else if (input == 'U') {
      leftForward();
      rightForward();
      digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
    } else if (input == 'D') {
      leftBackward();
      rightBackward();
       digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
    } else if (input == 'L') {
      leftBackward();
      rightForward();
       digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
    } else if (input == 'R') {
      leftForward();
      rightBackward();
       digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
    }
  }
}

void leftForward() {
  digitalWrite(LEFT_L, HIGH);
  digitalWrite(LEFT_R, LOW);
}

void leftBackward() {
  digitalWrite(LEFT_L, LOW);
  digitalWrite(LEFT_R, HIGH);
}

void rightForward() {
  digitalWrite(RIGHT_L, HIGH);
  digitalWrite(RIGHT_R, LOW);
}

void rightBackward() {
  digitalWrite(RIGHT_L, LOW);
  digitalWrite(RIGHT_R, HIGH);
}

boolean shortCircuit() {
  return LEFT_L == HIGH && LEFT_R == HIGH ||
    RIGHT_L == HIGH && RIGHT_R == HIGH;
}   
 
void stopAll() {
  digitalWrite(LEFT_L, LOW);
  digitalWrite(LEFT_R, LOW);
  digitalWrite(RIGHT_L, LOW);
  digitalWrite(RIGHT_R, LOW);
}
