int ledpin =8;
int buttonpin = 12;
int buttonread ;
int dt =500;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
Serial.begin(9600);
}
    
void loop() {
  // put your main code here, to run repeatedly:
buttonread =digitalRead(buttonpin);
Serial.println(buttonread);
delay(dt);
if(buttonread == 1){
digitalWrite(ledpin,HIGH);
}
delay(dt);
if(buttonread == 0){
digitalWrite(ledpin,LOW);
}
}
