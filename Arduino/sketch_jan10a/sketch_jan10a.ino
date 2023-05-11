//A CODE THE BLINKS LED ACCORDING TO BINARY PATTERN
int yellowLED = 7;
int redLED = 6;
int blueLED = 13;
int greenLED = 11;
int dit = 100;
int dat= 500;
void setup() {
pinMode(redLED,OUTPUT);
pinMode(blueLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(yellowLED,OUTPUT);
}
void loop() {
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);//0000
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//0001
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);//0010
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//0011
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);//0100
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//0101
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);
//0110
//  count n
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//0111
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);//1000
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//1001
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);
//1010
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,LOW);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//1011
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);//1100
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//1101
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,LOW);
delay(dit);
delay(dat);//1110
//  count n
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(blueLED,HIGH);
delay(dit);
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(greenLED,HIGH);
delay(dit);
delay(dat);//1111
}
