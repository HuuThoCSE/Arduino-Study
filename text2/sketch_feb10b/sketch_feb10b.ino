#include <Servo.h>

Servo myservo;

int bientro = A0;
int servoPin = 9;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(bientro);
  int servoPos = map(value, 0, 1023, 0, 180);
  myservo.write(servoPos);
  delay(100);
}
