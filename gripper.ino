#include <Servo.h>
int ser1Pin=8;
int ser2Pin=9;
Servo gripper;
Servo mover;
void setup()
{
  gripper.attach(ser1Pin);
  mover.attach(ser2Pin);
}
void loop()
{
  gripper.write(150);
  mover.write(0);
  delay(2000);
  gripper.write(70);
  delay(1500);
  mover.write(40);
  while (1>0);
}

