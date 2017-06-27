#ifndef HAND_H_
#define HAND_H_

#include "../motor.h"

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
class Hand {
      private:
	Motor fingers[5];

	Hand() :
	fingers {
		Motor(2, 0, 180),	
		Motor(3, 0, 180),	
		Motor(4, 0, 180),	
		Motor(5, 0, 180),	
		Motor(6, 0, 180),	
	}
	{}

      public:
	Motor operator[](int i) const { return fingers[i]; }
	Motor &operator[](int i) { return fingers[i]; }

};

#endif /* end HAND_H_ */
