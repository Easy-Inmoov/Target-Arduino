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
  
  int limitMax=180;
  int limitMin=0;

public: 
  
  void iniServo(int, int, int); //PIN , Limit Min , Limit Max   
  void doAngle(int); //Angle
  
  void setLimitMax(int);
  int getLimitMax();
  
  void setLimitMin(int);
  int getLimitMin();
};


#endif /* DEFSERVO_H */

