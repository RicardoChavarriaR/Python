#include <Arduino.h>

int led = 3;

void setup(){
  pinMode(led,OUTPUT);

  Serial.begin(9600);
}

void loop(){

  for(int i=0; i<256; i++){
    analogWrite(led,i);
    Serial.println(i);
  }
  for(int j=255; j>=0; j--){
    analogWrite(led,j);
    Serial.print(j);
  }
}