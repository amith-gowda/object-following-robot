#define trigPin 9
#define echoPin 13
#define L1 3 
#define L2 0
#define R1 5
#define R2 10
#define E1 7
#define E2 11
int duration,distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);
}
void loop() 
{
       digitalWrite(trigPin,HIGH);
       delay(100);
       digitalWrite(trigPin,LOW);
       duration = pulseIn(echoPin,HIGH);
       distance = (duration/2) / 29.5;
       Serial.println(distance);   
if(distance<60&&distance>10&&distance!=0)
{
     digitalWrite(E1,HIGH);
     digitalWrite(E2, HIGH);
     digitalWrite(L1,LOW);
     digitalWrite(L2,HIGH);
     digitalWrite(R1, LOW);
     digitalWrite(R2, HIGH);
     Serial.print("\tforward");
     delay(600);
     digitalWrite(E1,LOW);
     digitalWrite(E2, LOW);
}
else if(distance<10&&distance!=0)
{
   digitalWrite(E1,LOW);
     digitalWrite(E2, LOW);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(R1, LOW);
     digitalWrite(R2, LOW);
     Serial.print("\tstop");
     
}
else
{
     digitalWrite(E1,HIGH);
     digitalWrite(E2, HIGH);
     digitalWrite(L1,LOW);
     digitalWrite(L2,HIGH);
     digitalWrite(R1, HIGH);
     digitalWrite(R2, LOW);
     Serial.print("\tturning");
     delay(150);
     digitalWrite(E1,LOW);
     digitalWrite(E2, LOW);
 }
}

