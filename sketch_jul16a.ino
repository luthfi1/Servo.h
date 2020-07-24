#include<Servo.h>
Servo myservo;
int pos = 0;
void setup() { 
myservo.attach(16);
 pinMode (4,OUTPUT);
 pinMode (1,OUTPUT);
 pinMode (6,OUTPUT);
}

void loop() {
  for(pos = 0; pos < 180; pos += 1){
    myservo.write(pos);
    delay(10);
  }
for (pos = 180; pos>=1; pos-= 1){
   myservo.write(pos);
    delay(10);
}

 digitalWrite (4,HIGH);
 digitalWrite (1,HIGH);
 digitalWrite (6,HIGH);
  delay(1000);
  digitalWrite (4,LOW);
  digitalWrite (1,LOW);
  digitalWrite (6,LOW);
  delay(1000);
}
