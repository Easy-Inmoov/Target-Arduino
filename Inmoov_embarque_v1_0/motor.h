/*

Page de définition des servo

*/

#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
#include <Servo.h>

class Motor : public Servo {

      private:
	bool reverse;
	int maxAngle;
	int minAngle;

      public:
	Motor(int, bool = false, int = 30,
	      int = 150);   // PIN , Limit Min , Limit Max
	void setAngle(int); // Angle

	void setMaxAngle(int);
	int getMaxAngle() const;

	void setMinAngle(int);
	int getMinAngle() const;
};

#endif /* MOTOR_H */
