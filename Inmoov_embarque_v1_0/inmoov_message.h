#ifndef INMOOV_MESSAGE_H_
#define INMOOV_MESSAGE_H_

#include "state_machine/states.h"

class __attribute__((packed)) InmoovMessage {
	public:
	char mode;
	char limb;
	char motor_id;
	char debug;

	int read() {
		return Serial.readBytes((uint8_t *)this,
					sizeof(InmoovMessage));
	}

	int write() {
		return Serial.write((uint8_t *)this,
				    sizeof(InmoovMessage));
	}
	
	operator State() {
		switch(mode) {
			case 's':
				return State::Slave;
			case 'a':
				return State::Auto;
		}
	}
};

#endif
