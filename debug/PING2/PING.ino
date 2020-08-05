#define trig 9
#define echo 13
int duration,distance;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(115200);
}
void loop() 
{
       digitalWrite(trig,HIGH);
       delay(100);
       digitalWrite(trig,LOW);
       duration = pulseIn(echo,HIGH);
       distance = (duration/2) / 29.5;
       Serial.println(distance);   
}
