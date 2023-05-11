int lEd = 9; // will be edited to analog pin number
int dit = 100;
void setup() {
  // put your setup code here, to run once:
pinMode(lEd,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(lEd,0);
delay(dit);
analogWrite(lEd,128);
delay(dit);
analogWrite(lEd,255);
delay(dit);
}
