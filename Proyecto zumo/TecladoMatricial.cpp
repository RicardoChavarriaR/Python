#include <Arduino.h>
#include <Keypad.h>

const byte filas = 4;
const byte columnas = 4;
char keys[filas] [columnas] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'N','0','=','+'}
};

byte pinesFilas[filas] = {12,11,10,9};
byte pinesColumnas[columnas] = {8,7,6,5};

Keypad teclado = Keypad(makeKeymap(keys),pinesFilas,pinesColumnas,filas,columnas);

char tecla;
char clave[];
char claveMaestra[7] = "316794";
int indice = 0;

void setup(){
  Serial.begin(9600);

  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop(){
 tecla = teclado.getKey();
 // Serial.print(tecla);

//  if(tecla == '7'){
//   digitalWrite(4,HIGH);
//   delay(1000);
//  } else{
//   digitalWrite(4,LOW);
//  }

    if(tecla){
        clave[indice] = tecla;
        indice++;
        Serial.print(tecla);
    }
 
    if(indice == 6) Serial.println(" Correcta");
    else Serial.println(" Incorrecta");
    indice = 0;
}