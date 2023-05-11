int redLED = 8;
float  pi = 3.14;
int dit = 100;
int dat= 500;
int LongW=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);


digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);


digitalWrite(redLED,HIGH);
delay(dat);
digitalWrite(redLED,LOW);
delay(dat);


digitalWrite(redLED,HIGH);
delay(dat);
digitalWrite(redLED,LOW);
delay(dat);

digitalWrite(redLED,HIGH);
delay(dat);

digitalWrite(redLED,LOW);
delay(dat);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);


digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
delay(LongW);
}
