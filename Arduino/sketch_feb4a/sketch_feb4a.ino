int yellowled = 6;
int redled= 9;
int redde=500;
int yellowde=100;
int i;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(yellowled,OUTPUT);
pinMode(redled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=1;i<=3;i++){
digitalWrite(redled,HIGH);
delay(redled);
digitalWrite(redled,LOW);
delay(redled);
}

for(i=1;i<=2;i++){
digitalWrite(yellowled,HIGH);
delay(yellowled);
digitalWrite(yellowled,LOW);
delay(yellowled);
}
Serial.println();
}


int yellowled = 6;

int redled= 9;

int redde=500;

int yellowde=100;

int i;



void setup() {

  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(yellowled,OUTPUT);

  pinMode(redled,OUTPUT);

}



void loop() {

  // put your main code here, to run repeatedly:

  

  // This for loop will blink the red LED three times

  for(i=1;i<=3;i++){

    digitalWrite(redled,HIGH); // Turn on the red LED

    delay(redde); // Wait for redde milliseconds

    digitalWrite(redled,LOW); // Turn off the red LED

    delay(redde); // Wait for redde milliseconds

  }

  

  // This for loop will blink the yellow LED two times

  for(i=1;i<=2;i++){

    digitalWrite(yellowled,HIGH); // Turn on the yellow LED

    delay(yellowde); // Wait for yellowde milliseconds

    digitalWrite(yellowled,LOW); // Turn off the yellow LED

    delay(yellowde); // Wait for yellowde milliseconds

  }

  

  Serial.println(); // Print a blank line to the serial monitor

}

