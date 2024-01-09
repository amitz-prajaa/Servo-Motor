#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(0); // rotate servo to 0 degrees
  delay(500);
  myservo.write(45); // rotate servo to 180 degrees
  delay(500);

  myservo.write(90); // rotate servo to 0 degrees
  delay(500);
  myservo.write(135); // rotate servo to 180 degrees
  delay(500);

  myservo.write(180); // rotate servo to 0 degrees
  delay(500);
  
}
