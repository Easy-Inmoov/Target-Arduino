
#include <Arduino.h>
#include "config.h"
#include "defservo.h"

Motor MainDroite[5];
Motor Tete[5];

int ConfigInmoov::runMotorConfig(int mode)
{
/* Initialisation de la MAIN */ 
  
  MainDroite[1].iniServo(3,50,90); //INDEX
  MainDroite[3].iniServo(5,90,120);
  
  Tete[0].iniServo(12,30,100);
  Tete[1].iniServo(13,60,100);

/* COUCOU */  
      
  return 0;
};

int ConfigInmoov::runTEST()
{
  delay(1000);
  MainDroite[1].doAngle(50);
  delay(1000);
  MainDroite[1].doAngle(90);
  delay(1000);
  MainDroite[3].doAngle(120);
  delay(1000);
  MainDroite[3].doAngle(50);
  delay(1000);
  Tete[0].doAngle(30);
  delay(250);
  Tete[0].doAngle(90);
  delay(250);
  Tete[0].doAngle(120);
  delay(1000);
  Tete[1].doAngle(60);
  delay(1000);
  Tete[1].doAngle(100);
  
  return 0;
}
