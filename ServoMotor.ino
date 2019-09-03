#include <Servo.h>

//Servoansteuerung, 90 Grad, um den Anschlag zu machen.

Servo AnschlagServo;

void setup() {

  AnschlagServo.attach(9);

  Serial.begin(9600);

    AnschlagServo.write(0);

}

void loop() {

  

  AnschlagServo.write(180);

  delay(2000);
  Serial.println("null grad");

  AnschlagServo.write(90);
  Serial.println("nünzg grad");
  delay(2000);

}
