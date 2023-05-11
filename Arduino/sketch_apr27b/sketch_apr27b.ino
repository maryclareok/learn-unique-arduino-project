int ledstate;
int ledpin =8;
int buttonpin= 12;
int buttonnew;
int buttonold = 1;
int dt =100;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonnew = digitalRead(buttonpin);

}
