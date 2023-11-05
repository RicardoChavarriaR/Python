#include <Arduino.h>
#include <Servo.h>

Servo servo0;
int pinServo = 5;
int pulsoMin = 1000, pulsoMax = 2000;
int valorPot;
int angulo;
int pot = 0;


void setup(){
  servo0.attach(pinServo,pulsoMin,pulsoMax);
}

void loop(){
  valorPot = analogRead(pot);
  angulo = map(valorPot,0,1023,0,180); //Esta función convierte los datos del primer parámetro que van de
  // 0 a 1023 a valores de 0 a 180;
  servo0.write(angulo);
  delay(20);
}