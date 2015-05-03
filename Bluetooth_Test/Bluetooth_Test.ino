#include <SoftwareSerial.h>
SoftwareSerial mySerial(3, 4); // RX, TX

void setup() {
  Serial.begin(115200);
  pinMode(RED_LED,OUTPUT);
  digitalWrite(RED_LED,HIGH);
  Serial.println("Enter AT commands:");
  mySerial.begin(115200);
}

void loop() {
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}
