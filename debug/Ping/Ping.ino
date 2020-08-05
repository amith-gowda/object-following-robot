#include <Servo.h> 
#define trig 12
#define echo 13

  Servo myservo;  
  int duration, distance ,pos =0;
  void setup () 
  {
    myservo.attach(9); 
    Serial.begin(19200);
    pinMode(trig,OUTPUT);
    pinMode(echo,INPUT);
  
  }

  void loop ()
  {
   for(pos = 90;;)
    {
       myservo.write(pos);       
       digitalWrite(trig,HIGH);
       delay(1000);
       digitalWrite (trig,LOW);
       duration = pulseIn(echo,HIGH);
       distance = (duration/2) / 29.1;
    Serial.println(distance);   
    }
   } 


