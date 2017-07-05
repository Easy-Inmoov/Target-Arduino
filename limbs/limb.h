#ifndef LIMB_H_
#define LIMB_H_

#include "../motor.h"

class Limb {
	public:
	virtual Motor operator[](int i) const { return *(motors+i); }
	virtual Motor &operator[](int i) { return *(motors+i); }

	Limb(Motor* motors) : motors(motors) {}

	private:
	Motor* motors;
};

#endif /* end LIMB_H_ */
