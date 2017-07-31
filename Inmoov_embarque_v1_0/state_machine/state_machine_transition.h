#ifndef STATE_MACHINE_H_
#define STATE_MACHINE_H_

#include "../inmoov_message.h"
#include "states.h"

class StateMachineTransition {
      private:
	unsigned long lastTimestamp;
	State nextState;
	State currentState;
	State previousState;
	InmoovMessage *currentMessage;

	void changeInternalStates() {
		auto currentTime = millis();
		nextState = State::Err;

		// TODO: transition grid
		switch (currentState) {
		case State::Init:
			initTransition(currentTime);
			break;
		}

		previousState = currentState;
		currentState = nextState;
	}

	void initTransition(unsigned long currentTime) {
		if (currentTime - lastTimestamp > 5000) {
			nextState = State::Demo;
		}

		defaultTransition();
	}

	void defaultTransition() {
		if (!currentState) {
			nextState = *currentMessage;
		}
	}

      public:
	State updateState(InmoovMessage *message) {
		currentMessage = message;
		changeInternalStates();
		lastTimestamp = millis();
		return currentState;
	}

	StateMachineTransition()
	    : lastTimestamp(millis()), currentState(State::Init),
	      previousState(State::Err) {}
};

#endif /* end STATE_MACHINE_H_ */
