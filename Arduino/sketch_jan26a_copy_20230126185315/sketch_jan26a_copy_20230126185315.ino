int potpin =A1 ;//POTENTIOMETER IS GOING TO BE CONNECTED HERE
int potval ;// value gotten after turning the potentiometer
float ledval; //value we are goiung to feed into the led
int greenled = 6 ;//pin where the led is going to be connected to
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potpin,INPUT);//ITS GOING TO ACCEPT VALUE BY TURNING IT
pinMode(greenled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potval = analogRead(potpin);//reads the value you have after tuning the potentiometer
ledval = (255./1023.)*potval;
Serial.println(ledval);
analogWrite(greenled,ledval);
}
