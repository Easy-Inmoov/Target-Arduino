/*
      Robot Inmoov Paul Et Benoit
      RH : hanah@dagoma.fr
*/
 #include <Servo.h>
 #include "defservo.h"
 #include "config.h"
 
 Motor ServoDeTest;
 ConfigInmoov InmoovROBOT; //POUCE
 
 
// the setup routine runs once when you press reset:
void setup() {        
    InmoovROBOT.runMotorConfig(1);

    
}

// the loop routine runs over and over again forever:
void loop() {
InmoovROBOT.runTEST();
}
