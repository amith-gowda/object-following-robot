#include <AFMotor.h>

AF_DCMotor L(4);
AF_DCMotor R(3);

void setup(){}
void loop(){
      L.run(FORWARD);
      L.setSpeed(600); 
      R.run(FORWARD);
      R.setSpeed(600); 
      
}




