#include <Arduino.h>

// // L298 **********
// int pwm0 = 11, pwm1 = 6;
// int in1 = 10, in2 = 9, in3 = 8, in4 = 7;

// // Ultrasonic
// int trig = 13;
// int echo = 12;

// int tiempo, distancia;

// void setup(){
//  pinMode(trig,OUTPUT);
//  pinMode(echo,INPUT);
//  digitalWrite(trig,LOW); //Inicializamos el trig en 0

//  // Serial
//  Serial.begin(9600);
// }

// void loop(){
// digitalWrite(trig,HIGH);
// delayMicroseconds(10); //Se envia un pulso de 10 us
// digitalWrite(trig,LOW);

// tiempo = pulseIn(echo,HIGH); //Obtenemos el ancho del pulso
// distancia = tiempo/59;

// Serial.println(distancia);
// delay(100);
// }

//***********************************************************************************************************
// const int Trigger = 2;   //Pin digital 2 para el Trigger del sensor
// const int Echo = 3;   //Pin digital 3 para el Echo del sensor

// void setup() {
//   Serial.begin(9600);//iniciailzamos la comunicación
//   pinMode(Trigger, OUTPUT); //pin como salida
//   pinMode(Echo, INPUT);  //pin como entrada
//   digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
// }

// void loop()
// {

//   long t; //timepo que demora en llegar el eco
//   long d; //distancia en centimetros

//   digitalWrite(Trigger, HIGH);
//   delayMicroseconds(10);          //Enviamos un pulso de 10us
//   digitalWrite(Trigger, LOW);
  
//   t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
//   d = t/59;             //escalamos el tiempo a una distancia en cm
  
//   Serial.print("Distancia: ");
//   Serial.print(d);      //Enviamos serialmente el valor de la distancia
//   Serial.print("cm");
//   Serial.println();
//   delay(100);          //Hacemos una pausa de 100ms
// }
/**************************************************************************************************/

int servoTortuga = 5;

int trigger = 2;
int echo = 3;
long tiempo, distancia; // Ultrasonico

int pin10 = 10,pin9 = 9, pin8 = 8,pin7 = 7;
int pwm11 = 11,pwm6 = 6; //Pines del l298

void setup(){
  pinMode(servoTortuga,OUTPUT); 

  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);

  digitalWrite(trigger,LOW); //Parte del ultrasonico

  pinMode(pwm6,OUTPUT);
  pinMode(pwm11,OUTPUT);
  pinMode(pin10,OUTPUT);
  pinMode(pin9,OUTPUT);
  pinMode(pin8,OUTPUT);
  pinMode(pin7,OUTPUT); //Pines del arduino hacia l298
}

void loop(){
  digitalWrite(trigger,HIGH);
  delay(10);
  digitalWrite(trigger,LOW);

  tiempo = pulseIn(echo,HIGH);
  distancia = tiempo/59;

  Serial.println(distancia);

  analogWrite(servoTortuga,50); //Posición sel motorreductor del ultrasónico (tortuga de proteus)

//************************************************************** Comienza a buscar objetivos *****************************************
analogWrite(pwm11,150);
analogWrite(pwm6,150);

digitalWrite(pin10,HIGH);
digitalWrite(pin9,LOW);
digitalWrite(pin8,LOW);
digitalWrite(pin7,HIGH);

//*************************************************************** Al encontrar objetivos (Ultrasonico) **********************************
if(distancia>100 && distancia<300){
  analogWrite(pwm11,255);
  analogWrite(pwm6,255);

  digitalWrite(pin10,LOW);
  digitalWrite(pin9,HIGH);
  digitalWrite(pin8,LOW);
  digitalWrite(pin7,HIGH);
}

//************************************************************** Condicionales del ultrasónico ******************************************


}