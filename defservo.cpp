
#include <Servo.h>
#include <Arduino.h>
#include "defservo.h"

void Motor::initServo(int pin, int limitmin , int limitmax)
{

  Motor::attach(pin);
  Motor::setLimitMin(limitmin);
  Motor::setLimitMax(limitmax);
}

void Motor::setAngle(int angle) //Angle
{
  angle = abs(angle);
  if(this->limitMax < angle) { angle = this->limitMax;}
  if(this->limitMin > angle) { angle = this->limitMin;}
  Motor::write(angle);        
}

void Motor::setLimitMax(int limitmax)
  {
    this->limitMax = limitmax;
  }
  
  int Motor::getLimitMax()
  {
    return this->limitMax;
  }
  
void Motor::setLimitMin(int limitmin)
  {
    this->limitMin = limitmin;
  }
  
  int Motor::getLimitMin()
  {
    return this->limitMin;
  }
