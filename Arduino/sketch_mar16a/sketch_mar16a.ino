int buzzpin = 8;
int buzztime = 1;
int buzztime2 = 60;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzpin,HIGH);
delayMicroseconds(buzztime2);
digitalWrite(buzzpin,LOW);
delayMicroseconds(buzztime2);
}
