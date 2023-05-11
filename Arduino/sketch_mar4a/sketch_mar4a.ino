int potpin = A0;
int potvalue;
int buzzpin  = 8;
int dt = 500;
void setup() {
Serial.begin(9600);
pinMode(potpin,INPUT);
pinMode(buzzpin,OUTPUT);
}

void loop() {
  potvalue = analogRead(potpin);
  delay(dt);
  Serial.println(potvalue);
  while(potvalue>1000){
  digitalWrite(buzzpin,HIGH);
  potvalue = analogRead(potpin);
  Serial.println(potvalue);
  delay(dt);
  }
  digitalWrite(buzzpin,LOW);
}
