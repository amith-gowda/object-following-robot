#define H 3
#define L 4

void setup () 
  {
    pinMode(H,OUTPUT);
    pinMode(L,OUTPUT);
    Serial.begin(19200);
  
  }

  void loop ()
  {
       digitalWrite(H,HIGH);
       digitalWrite (L,LOW);
       Serial.print("im on\n");
   } 

