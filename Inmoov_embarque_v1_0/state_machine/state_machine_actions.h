#ifndef STATE_MACHINE_ACTIONS_H_
#define STATE_MACHINE_ACTIONS_H_

#include "../inmoov_message.h"
#include "states.h"

class StateMachineAction {
      private:
	InmoovMessage lastMessage;

		void initAction() {
			
		}

      public:
	newStateAction(State s, InmoovMessage m) {
		lastMessage = m;
		switch (s) {
		case State::Init:
		case State::Err:
		case State::Slave:
		case State::Auto:
		case State::Demo:
			break;
		}

	}
};

#endif /* end STATE_MACHINE_ACTIONS_H_ */
