
#include <Servo.h>
#include <Arduino.h>
#include "defservo.h"

void Motor::iniServo(int pin, int limitmin , int limitmax)
{

  Servo::attach(pin);
  Motor::setLimitMin(limitmin);
  Motor::setLimitMax(limitmax);
}

void Motor::doAngle(int angle) //Angle
{
  Servo::write(angle);        
}

void Motor::setLimitMax(int limitmax)
  {
    this->limitMax = limitmax;
  }
  
  int Motor::getLimitMax(int limitmax)
  {
    return this->limitMax;
  }
  
void Motor::setLimitMin(int limitmin)
  {
    this->limitMin = limitmin;
  }
  
  int Motor::getLimitMin(int limitmin)
  {
    return this->limitMin;
  }
