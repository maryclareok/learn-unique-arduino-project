int redpin =12;
int yellowpin = 10;
int bluepin  = 11;
String myColour;
String msg = "enter the colour";
int dt = 500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(yellowpin,OUTPUT);
pinMode(bluepin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(msg);
delay(2000);
 while (Serial.available()==0){
}

myColour = Serial.readString();
Serial.println(myColour);
if(myColour == "red"){
  digitalWrite(redpin,HIGH);
 digitalWrite(yellowpin,LOW);
  digitalWrite(bluepin,LOW);
  delay(dt );
}
if(myColour == "yellow"){
  digitalWrite(yellowpin,HIGH);
   digitalWrite(redpin,LOW);
  digitalWrite(bluepin,LOW);
  delay(dt);}
if(myColour == "blue"){
  digitalWrite(bluepin,HIGH);
  digitalWrite(redpin,LOW);
  digitalWrite(yellowpin,LOW);
  delay(dt);
}

}
