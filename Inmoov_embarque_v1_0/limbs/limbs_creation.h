#ifndef LIMB_CREATION_H
#define LIMB_CREATION_H

#include "../motor.h"
#include "limb.h"

Motor rightHandMotors[] = {Motor(2), Motor(3), Motor(4), Motor(5), Motor(6)};
Limb rightHand(rightHandMotors);

Motor rightArmMotors[] = {Motor(8), Motor(9), Motor(10), Motor(11)};
Limb rightArm(rightArmMotors);

#endif /*  LIMB_CREATION_H */
