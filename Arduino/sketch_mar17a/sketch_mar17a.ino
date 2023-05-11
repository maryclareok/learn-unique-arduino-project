int dt = 100;
void setup() {
    pinMode(4, OUTPUT); // set a pin for buzzer output
}

void loop() {.
 
    buzz(4, 440, 250); //A
    buzz(4, 440, 250); //A
      buzz(4, 392, 250); //G
        buzz(4, 440, 250); //A
	    buzz(4, 392, 250); //G
	    buzz(4, 349, 250);//F
	    //1st
	
     buzz(4,523, 250);//C
    buzz(4, 523, 250);//C
    buzz(4, 440, 250); //A
    buzz(4, 440, 250); //A
       buzz(4, 440, 250); //A
           buzz(4, 440, 250); //A
    buzz(4, 440, 250); //A
       buzz(4, 440, 250); //A

    //2nd
    
    
    buzz(4, 349, 250);//F
    buzz(4, 349, 250);//F
    buzz(4, 349, 250);//F
    buzz(4, 349, 250);//F
          buzz(4, 392, 250); //G
	        buzz(4, 392, 250); //G
    buzz(4, 440, 250); //A
    delay(5);
    
    //3rd
    buzz(4, 349, 250);//F
    buzz(4, 349, 250);//F
    buzz(4, 349, 250);//F
    buzz(4, 349, 250);//F
          buzz(4, 392, 250); //G
    buzz(4, 440, 250); //A    
      buzz(4, 294, 250);//D
         buzz(4, 262, 250);//C
    //4th
         buzz(4, 262, 250);//C
	 delay(5);
      buzz(4, 294, 250);//D
         buzz(4, 262, 250);//C
      buzz(4, 294, 250);//D
         buzz(4, 262, 250);//C
    buzz(4, 220, 250); //A
    buzz(4, 220, 250); //A
    delay(250); // wait a bit between buzzes
}

void buzz(int targetPin, long frequency, long length) {
    long delayValue = 250000/frequency/2; // calculate the delay value between transitions
    //// 0.25 second's worth of microseconds, divided by the frequency, then split in half since
    //// there are two phases to each cycle
    long numCycles = frequency * length/ 250; // calculate the number of cycles for proper timing
    //// multiply frequency, which is really cycles per second, by the number of seconds to
    //// get the total number of cycles to produce
    for (long i=0; i < numCycles; i++){ // for the calculated length of time...
        digitalWrite(targetPin,HIGH); // write the buzzer pin high to push out the diaphram
        delayMicroseconds(delayValue); // wait for the calculated delay value
        digitalWrite(targetPin,LOW); // write the buzzer pin low to pull back the diaphram
        delayMicroseconds(delayValue); // wait again or the calculated delay value
    }
}
