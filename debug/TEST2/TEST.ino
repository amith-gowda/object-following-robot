#include <AFMotor.h>
#define trigPin 12
#define echoPin 13
int duration,distance;
AF_DCMotor L(4);
AF_DCMotor R(2);
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);
}
void loop() 
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(900);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.5;
  if(distance<50&&distance>10)
{
     
      L.run(FORWARD);
      L.setSpeed(500); 
      R.run(FORWARD);
      R.setSpeed(500); 
      
      Serial.print("\nforward");
}

/*else
    {
      Serial.print("\nturning");
      
      L.run(BACKWARD);
      L.setSpeed(300); 
      R.run(FORWARD);
      R.setSpeed(300);
      
      delay(1000); 
      
      L.setSpeed(0); 
      R.setSpeed(0);
      
    }
*/}
