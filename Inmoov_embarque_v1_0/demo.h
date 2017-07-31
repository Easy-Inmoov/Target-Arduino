#ifndef DEMO_H_
#define DEMO_H_

#include "limbs/limbs_creation.h"

/**
 * @brief Yes, this should be doing a middle finger
 *
 * @param hand
 */
void demoHand(Limb &hand) {
	hand[0].setAngle(0);
	hand[1].setAngle(90);
	hand[2].setAngle(90);
	hand[3].setAngle(90);
	hand[4].setAngle(90);
}

#endif /* end DEMO_H_ */
