#include <Arduino.h>
#include <Servo.h>

Servo myservo; //Se crea un objeto para controlar el servo
int pos = 0; //Variable para guardar la posición del servo

void setup(){
  myservo.attach(9); //Agrega el servo en el pin 9 a el objeto servo
}

void loop(){
  for(pos=0; pos<=180; pos++){ //Aumenta el ángulo del servo cada 1 grado
    myservo.write(pos);
    delay(15);  //Espera 15 milisegundos a que el servo llegue la la posición
  }
  delay(tiempo);
  for(pos=180; pos>=0; pos--){ //Aumenta el ángulo del servo cada 1 grado
    myservo.write(pos);
    delay(15);  //Espera 15 milisegundos a que el servo llegue la la posición
  }
  delay(tiempo);
}