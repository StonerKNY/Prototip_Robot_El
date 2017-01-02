#include<Servo.h>
Servo servo1;
const int flexpin = 0;

void setup()
{
  Serial.begin(9600);
  servo1.attach(9);

}

void loop()
{
  int flexposition;
  int servoposition;
  flexposition = analogRead(flexpin);
  Serial.println(flexposition);
  servoposition = map(flexposition, 0, 1023, 0, 180);
  servoposition = constrain(flexposition, 0, 180);
  servo1.write(servoposition);
  Serial.print("sensor:");
  Serial.print(flexposition);
  Serial.print("servo:");
  Serial.print(servoposition);
  delay(200);

}
