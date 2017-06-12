/*

Page de définition des servo

*/


#ifndef DEFSERVO_H
#define DEFSERVO_H

#include <Arduino.h>
#include <Servo.h>

class Motor:public Servo
{

private:
  
  int limitMax;
  int limitMin;

public: 
  
  void iniServo(int, int, int); //PIN , Limit Min , Limit Max   
  void doAngle(int); //Angle
  
  void setLimitMax(int);
  int getLimitMax(int);
  
  void setLimitMin(int);
  int getLimitMin(int);
};


#endif /* MOTOR_H */

