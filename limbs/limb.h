#ifndef LIMB_H_
#define LIMB_H_

#include "../motor.h"

class Limb {
	virtual Motor operator[](int i) const = 0;
	virtual Motor &operator[](int i) = 0;

};

#endif /* end LIMB_H_ */
