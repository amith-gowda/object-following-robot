#define trig 9
#define echo 13

  int duration, distance ;
  void setup () 
  {
    Serial.begin(19200);
    pinMode(trig,OUTPUT);
    pinMode(echo,INPUT);
  
  }

  void loop ()
  {
       digitalWrite(trig,HIGH);
       delay(100);
       digitalWrite(trig,LOW);
       duration = pulseIn(echo,HIGH);
       distance = (duration/2) / 29.5;
       Serial.println(distance);   
   
   } 


