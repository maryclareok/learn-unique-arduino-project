int redpin = A1;
int greenPin =A2;
int bluePin = A3;
String mycolor ;
String msg ="what colour do you want";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0)
{

}
mycolor = Serial.readString();
if(mycolor == "violet"){
  analogWrite(redpin,238);
  analogWrite(greenPin,130);
  analogWrite(bluePin,238);
}
if(mycolor == "purple"){
  analogWrite(redpin,128);
  analogWrite(greenPin, 0); 
  analogWrite(bluePin,128);
}
if(mycolor == "neon green"){
  analogWrite(redpin,57);
  analogWrite(greenPin,255);
  analogWrite(bluePin,20);
}
}
