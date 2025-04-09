#include <Arduino.h>
#include <Servo.h>

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(D1);
}

void loop()
{
  myServo.write(180);
  delay(2000);
  myServo.write(0);
  delay(2000);
  myServo.write(180);
  delay(2000);
}

// void loop() {
  //   // put your main code here, to run repeatedly:
  //   for (int pos = 0; pos <= 180; pos++)
  //   {
    //     myServo.write(pos);
    //     delay(10);
//   }
  
//   for (int pos = 180; pos >= 0; pos--)
//   {
//     myServo.write(pos);
//     delay(10);
//   }
// }
