/*
      Robot Inmoov Paul Et Benoit
      RH : hanah@dagoma.fr
*/
 #include <Servo.h>
 #include "motor.h"
// #include "config.h"
#include "demo.h"

#include "limbs/limbs_creation.h"

// ConfigInmoov InmoovROBOT; //POUCE
extern Limb rightHand;


// the setup routine runs once when you press reset:
void setup() {
//    InmoovROBOT.runMotorConfig(1);


}

// the loop routine runs over and over again forever:
void loop() {
//InmoovROBOT.runTEST();
	demoHand(rightHand);
}
