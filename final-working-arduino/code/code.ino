  #define trigPin1 2
#define echoPin1 3

#define trigPin2 4
#define echoPin2 5

#define trigPin3 6
#define echoPin3 7

#define vibrator1 9
#define vibrator2 11
#define buzzer 13


void setup()
{
pinMode(trigPin1, OUTPUT);

pinMode(echoPin1, INPUT);

pinMode(trigPin2, OUTPUT);

pinMode(echoPin2, INPUT);

pinMode(trigPin3, OUTPUT);

pinMode(echoPin3, INPUT);

pinMode(vibrator1, OUTPUT);
pinMode(vibrator2, OUTPUT);
pinMode(buzzer, OUTPUT);

Serial.begin(9600);


}

void loop()

{

long duration, distance;

digitalWrite(trigPin1, LOW); 

delayMicroseconds(2); 

digitalWrite(trigPin1, HIGH);

delayMicroseconds(1); 

digitalWrite(trigPin1, LOW);

duration = pulseIn(echoPin1, HIGH);

distance = (duration/2) / 29.1; //29.1 = 1/0.034   the duration is actually returned in microseconds.

if(distance>=4 && distance < 100) //old value >=10

{ 
digitalWrite(buzzer,HIGH);
Serial.println(distance);

} 
else if(distance >=100 && distance <170) //oldvaluse <150

{
//delay(200);
digitalWrite(buzzer,HIGH);
delay(100);
Serial.println(distance);

digitalWrite(buzzer,LOW); 

}
else if (distance>=178) //oldvalues 160
{
  digitalWrite(buzzer,LOW);
  Serial.println(distance);
  
  //delay(200);
}
 delay(200);



digitalWrite(trigPin2, LOW); 

delayMicroseconds(2); 

digitalWrite(trigPin2, HIGH);

delayMicroseconds(1); 

digitalWrite(trigPin2, LOW);

duration = pulseIn(echoPin2, HIGH);

distance = (duration/2) / 29.1;

if (distance < 70)

{ 

digitalWrite(vibrator1,HIGH);
//Serial.println(distance);

} 
else

{

digitalWrite(vibrator1,LOW);
 

} delay(200);




digitalWrite(trigPin3, LOW); 

delayMicroseconds(2); 

digitalWrite(trigPin3, HIGH);

delayMicroseconds(2); 

digitalWrite(trigPin3, LOW);

duration = pulseIn(echoPin3, HIGH);

distance = (duration/2) / 29.1;

if (distance < 70)

{ 

digitalWrite(vibrator2,HIGH);
//Serial.println(distance); 

} else

{

digitalWrite(vibrator2,LOW);
 

} delay(200);

}
