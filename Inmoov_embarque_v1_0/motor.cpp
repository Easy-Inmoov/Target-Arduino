
#include "motor.h"
#include <Arduino.h>
#include <Servo.h>

Motor::Motor(int pin, bool reverse, int maxAngle, int minAngle)
    : reverse(reverse), maxAngle(maxAngle), minAngle(minAngle) {

	Motor::attach(pin);
}

void Motor::setAngle(int angle) {
	if (reverse)
		angle = 180 - angle;

	if (this->maxAngle < angle) {
		angle = this->maxAngle;
	}
	if (this->minAngle > angle) {
		angle = this->minAngle;
	}

	Motor::write(angle);
}

void Motor::setMaxAngle(int limitmax) { this->maxAngle = limitmax; }

int Motor::getMaxAngle() const { return this->maxAngle; }

void Motor::setMinAngle(int limitmin) { this->minAngle = limitmin; }

int Motor::getMinAngle() const { return this->minAngle; }
