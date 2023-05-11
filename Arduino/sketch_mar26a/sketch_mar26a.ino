int lightpin= A0;
int buzzpin = 8;
int lightval;
int delaytime;
void setup(){
pinMode(lightpin,INPUT);
pinMode(buzzpin,OUTPUT);
Serial.begin(9600);

}
void loop(){
  lightval = analogRead(lightpin);
  delaytime =(9.0/550.)*lightval-(9.*200./550.)+1.0;
  Serial.println(lightval);
  digitalWrite(buzzpin,HIGH);
  delay(delaytime);
  digitalWrite(buzzpin,LOW);
  delay(delaytime);
}