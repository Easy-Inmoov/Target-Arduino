/*
      Robot Inmoov Paul Et Benoit
      RH : hanah@dagoma.fr
*/
#include <Servo.h>
#include "motor.h"
// #include "config.h"
#include "demo.h"

#include "limbs/limbs_creation.h"

#include "state_machine/state_machine_actions.h"
#include "state_machine/state_machine_transition.h"
#include "state_machine/states.h"

// ConfigInmoov InmoovROBOT; //POUCE
extern Limb rightHand;
StateMachineTransition smt;
StateMachineAction sma;

InmoovMessage receive_buffer;

// the setup routine runs once when you press reset:
void setup() {
	//    InmoovROBOT.runMotorConfig(1);
Serial.begin(9600);
	receive_buffer.mode = '.';
	receive_buffer.limb = '.';
	receive_buffer.motor_id = '.';
	receive_buffer.debug = '.';
}

// the loop routine runs over and over again forever:
void loop() {
	// InmoovROBOT.runTEST();
	/*demoHand(rightHand);*/
	while (!receive_buffer.read()) {
	}

	receive_buffer.mode += 14;
	receive_buffer.limb += -8;
	receive_buffer.motor_id += 1;
	receive_buffer.debug += 7;

	receive_buffer.write();
}
