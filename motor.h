/*

Page de définition des servo

*/


#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
#include <Servo.h>

class Motor: public Servo
{

private:
  
  int limitMax;
  int limitMin;

public: 
  
  Motor(int, int=30, int=150); //PIN , Limit Min , Limit Max   
  void setAngle(int); //Angle
  
  void setLimitMax(int);
  int getLimitMax();
  
  void setLimitMin(int);
  int getLimitMin();
};


#endif /* MOTOR_H */

