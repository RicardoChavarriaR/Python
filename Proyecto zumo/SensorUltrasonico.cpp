#include <Arduino.h>

int led = 3;
int brillo;
int pot = 0;

void setup(){
  pinMode(led,OUTPUT);
  // En el caso del pot puede ser únicamente entrada analógica por lo que no requiere ser declarado

  Serial.begin(9600);
}

void loop(){

brillo = analogRead(pot) / 4; //analogWrite entrega un valor entre 0 y 1023 por eso lo dividimos entre 4, para que analogWrite pueda leerlo ya que no trabaja con más de 255
analogWrite(led,brillo); /*analogWrite trabaja con valores entre 0 y 255
pero las entradas analógicas nos devuelven siempre un valor entre 0 y 1023
*/
Serial.begin(9600);
Serial.print("Variables del entorno");
}
