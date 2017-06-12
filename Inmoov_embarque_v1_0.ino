/*
      Robot Inmoov Paul Et Benoit
     
*/
 #include <Servo.h>
 #include "defservo.h"
 Motor ServoDeTest;

// the setup routine runs once when you press reset:
void setup() {        
    ServoDeTest.iniServo(2,60,80);
    
  // initialize the digital pin as an output.
}

// the loop routine runs over and over again forever:
void loop() {

delay(250);
ServoDeTest.doAngle(60);
delay(250);
ServoDeTest.doAngle(80);
}
