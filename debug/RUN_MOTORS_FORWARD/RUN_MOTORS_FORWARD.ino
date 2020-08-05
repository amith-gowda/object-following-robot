#define L1 3 
#define L2 0
#define R1 5
#define R2 10
#define E1 7
#define E2 11
void setup()
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
}
void loop() 
{
     digitalWrite(E1,HIGH);
     digitalWrite(E2, HIGH);
     digitalWrite(L1,LOW);
     digitalWrite(L2,HIGH);
     digitalWrite(R1, LOW);
     digitalWrite(R2, HIGH);
  }

