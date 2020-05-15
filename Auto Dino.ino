#include <Servo.h>
Servo my;
float a;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  my.attach(13);
  for (int i = 0; i < 1000; i++) {
    a = a + analogRead(A0);
  }
  a = a / 1000;
}
void loop() {
  Serial.println(analogRead(A0));
  if (analogRead(A0) < a-10) {
    my.write(15);
    delay(20);
  }
  else {
    my.write(25);
  }
}
