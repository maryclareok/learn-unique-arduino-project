  int potval; 
  int delaytime = 500;
  int potpin = A0;
  int redpin = 7;
  void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potpin, INPUT);
  pinMode(redpin, OUTPUT);
  }

  void loop() {
  // put your main code here, to run repeatedly:
  potval = analogRead(potpin);
  delay(delaytime);
  Serial.println(potval);
  while (potval > 1000) {
    digitalWrite(redpin, HIGH);
    potval = analogRead(potpin);
    Serial.println(potval);
      delay(delaytime);
  }
  digitalWrite(redpin, LOW);
  }
