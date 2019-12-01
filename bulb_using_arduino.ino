#include <Servo.h>
Servo myservo;
int pos = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(A3, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);
  pinMode(5, OUTPUT);
  Serial.begin(9600);

  myservo.attach(3);
  myservo.write(pos);////90

}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(digitalRead(A3));
  int x = digitalRead(A3);
  if (x == 1)
  {
    digitalWrite(5, LOW);//relay gets on when LOW is given
  }
  else
  {
    digitalWrite(5, HIGH);
  }
  int y = digitalRead(A5);
  Serial.println(y);
  if (y == 1)
  {
    for (; pos <= 90; pos += 1)
    {
      myservo.write(pos);
      delay(30);
    }
  }
  else
  {
    if (pos != 0)
    {
      for ( ; pos >= 0; pos -= 1)
      {
        myservo.write(pos);
        delay(30);
      }
    }
  }
}
