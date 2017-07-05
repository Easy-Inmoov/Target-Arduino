#ifndef LEG_H_
#define LEG_H_

#include "../motor.h"
#include "limb.h"

/**
 * @brief Class that represents a hand
 * The same class is used (for now) for both hands (l/r)
 * To access the Motor objects representing the fingers, one can use the []
 * operator.
 *
 * The order is such:
 * 0 - thumb
 * 1 - index
 * 2 - middle finger
 * 3 - ring finger
 * 4 - pinky
 *
 * TODO add define to access fingers instead of numbers ?
 *
 * TODO get the Motor constructor's parameter from a general config file ?
 */
class Arm : public Limb {
      public:
	Arm()
	    : parts{
		  Motor(2, 0, 180), Motor(3, 0, 180), Motor(4, 0, 180),
		  Motor(5, 0, 180), Motor(6, 0, 180),
	      } {}

	Motor operator[](int i) const override { return parts[i]; }
	Motor &operator[](int i) override { return parts[i]; }

      private:
	Motor parts[5];
};

#endif /* end LEG_H_ */
