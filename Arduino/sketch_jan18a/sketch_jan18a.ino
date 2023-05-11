int myVoltPin = A2;
int readVal;
float V2;
int DelayT = 500;
int redpin = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myVoltPin, INPUT);
  pinMode(redpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myVoltPin);
  V2 = (5. / 1023.) * readVal;
  Serial.println(V2);
  delay(DelayT);
  if (V2 < 4.0) {
    digitalWrite(redpin, HIGH);
  }
  if (V2 > 4.0) {
    digitalWrite(redpin, LOW);
  }
}
