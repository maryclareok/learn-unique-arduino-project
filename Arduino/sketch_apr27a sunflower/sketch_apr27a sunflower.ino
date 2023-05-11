#include <Servo.h>
int lightpin = A5;
int lightval;
int servpin=9;
int servpos = 180;
int servpos2 = 0;
Servo myservo;
int i;
int delaytime = 50;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(servpin);
pinMode(lightpin,INPUT);
}

void loop() {
   myservo.write(servpos2);
  // put your main code here, to run repeatedly:
  lightval = analogRead(lightpin);
  Serial.println(lightval);
  while ( true) {
  if(lightval<=201){
  myservo.write(servpos);
    lightval = analogRead(lightpin);
    Serial.println(lightval);
    delay(delaytime);}
    else if (lightval>201){
    for(i=0;i<180;i=i+30){
        myservo.write(i);
	delay(delaytime);
	 lightval = analogRead(lightpin);
	 delay(delaytime);
	 Serial.println(lightval);
	 }
  }
  }

  }
