#ifndef DEMO_H_
#define DEMO_H_

#include "limbs/hand.h"

/**
 * @brief Yes, this should be doing a middle finger
 *
 * @param hand
 */
void demoHand(Hand &hand) {
	hand[0].setAngle(0);
	hand[1].setAngle(0);
	hand[3].setAngle(0);
	hand[4].setAngle(0);

	hand[2].setAngle(180);
}

#endif /* end DEMO_H_ */
