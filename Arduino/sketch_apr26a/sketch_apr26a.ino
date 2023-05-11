#include <Servo.h>
int servpin=9;
int servpos=0;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(servpin);
}

void loop() {
  // put your main code here, to run repeatedly:
myservo.write(servpos);
}
