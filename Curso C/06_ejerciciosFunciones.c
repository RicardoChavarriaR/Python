// //Sumar, restar, Multiplicar y Dividir

// #include <stdio.h>

// void Sumar();
// void menu();
// void Restar();
// void Multiplicar();
// void Dividir();



// int main() {
//     menu();
//     return 0;
// }

// void menu(){

//     int opcion;
//     do
//     {
//         printf("1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Salir\n");
//         printf("Opcion\n");
//         scanf("%i",&opcion);

//         switch (opcion)
//         {
//         case 1: Sumar();
//         break;
//         case 2: Restar();
//         break;
//         case 3: Multiplicar();
//         break;
//         case 4: Dividir();
//         break;
        
//         default: 
//             break;
//         }
//     } while (opcion!=5);
// }

// // void Sumar(){

// //     int n1,n2,suma=0;
// //     printf("Escribe 2 Numeros\n");
// //     scanf("%i %i",&n1,&n2);
// //     suma = n1+n2;
// //     printf("La Suma es %i\nQue mas quieres hacer?\n",suma);

// // }

// void Sumar(){
//     int numero1,numero2,suma = 0;
//         printf("Escribe dos numeros:\n");
//         scanf("%i %i",&numero1,&numero2);

//             suma = numero1 + numero2;
//     printf("La suma es: %i", suma);
// }
// void Restar(){

//     int n1,n2,resta=0;
//     printf("Escribe 2 Numeros\n");
//     scanf("%i %i",&n1,&n2);
//     resta = n1-n2;
//     printf("La Resta es %i\nQue mas quieres hacer?\n",resta);

// }

// void Multiplicar(){

//     int n1,n2,multiplicar=0;
//     printf("Escribe 2 Numeros\n");
//     scanf("%i %i",&n1,&n2);
//     multiplicar = n1*n2;
//     printf("La Multiplicacion es %i\nQue mas quieres hacer?\n",multiplicar);

// }

// void Dividir(){

//     int n1,n2,dividir=0;
//     printf("Escribe 2 Numeros\n");
//     scanf("%i %i",&n1,&n2);
//     dividir = n1/n2;
//     printf("La Division es %i\nQue mas quieres hacer?\n",dividir);

// }


//*****************************************Método bisección*****************************************************
// #include <stdio.h>
// #include <math.h>

// float fx(float valor);
// float valorMedio(float valor1, float valor2);
// float errorRelativo(float valor1, float valor2);

// float a = 0, mi = 0, miAntiguo = 0;
// float b = 30;
// float fa = 0, fb = 0, fmi = 0;
// float er = 0;

// float resultado;

// int main(){
//             printf("    a         fa         b         fb          mi         fmi       er\n");


// for(int iteraciones = 0; iteraciones < 20; iteraciones++){
//                 miAntiguo = mi;

//             fx(a);
//                 fa = resultado;

//             fx(b);
//                 fb = resultado;

//             valorMedio(a,b);
//                 mi = resultado;
            
//             fx(mi);
//                 fmi = resultado;

//             errorRelativo(mi,miAntiguo);
//                 er = resultado;

//                     printf("%f  %f  %f  %f  %f   %f  %f\n",a,fa,b,fb,mi,fmi,er);

//                 if(fa*fmi<0) b = mi;
//                 else if(fmi == 0) break;
//                 else a = mi;
// }
// return 0;
// }



// float fx(float valor){
//     resultado = pow(valor,3) -17*pow(valor,2) + valor - 18;;
//     return resultado;
// }

// float valorMedio(float valor1, float valor2){
//     resultado = (valor1 + valor2)/2;
//     return resultado;
// }

// float errorRelativo(float valor1, float valor2){
//     resultado = (fabs(valor1-valor2)/valor1)*100;
//     return resultado;
// }

//******************************************* Convertir grados a Celcius y farenheith y viceversa *********************************
// #include <stdio.h>

// float kelvinACelcius(float valor);
// float farenheithACelcius(float valor);

// float celciusAKelvin(float valor);
// float FarenheitAKelvin(float valor);

// float kelvinAFarenheit(float valor);
// float CelciusAFarenheit(float valor);

// float resultado = 0;
// float grados = 0;
// int opcion = 0;

// int main(){
//     printf("Escribe los grados que deseas convertir:\n");
//     scanf("%f",&grados);

//     printf("Selecciona la opción que te gustaria trabajar:\n");
//     printf("1)Celcius \n2)Farenheit \n3)Kelvin \n");
//     scanf("%i",&opcion);

//     switch(opcion){
//         case 1: printf("Selecciona que quieres hacer:\n");
//                 printf("1)Celcius a Kelvin \n2)Celcius a Farenheit\n");
//                     scanf("%i",&opcion);

//                         if(opcion == 1){
//                         kelvinACelcius(grados);
//                         printf("Respuesta Kelvin a Celcius:%f\n",resultado);
//                         }

//                         else if(opcion == 2) {
//                         farenheithACelcius(grados);
//                         printf("Respuesta Farenheit a Celcius:%f\n",resultado);
//                         }
//         break;


//         case 2: printf("Selecciona que quieres hacer:\n");
//                 printf("1)Farenheit a Kelvin\n2)Farenheit a Celcius\n");
//                     scanf("%i",&opcion);

//                         if(opcion == 1){
//                         kelvinAFarenheit(grados);
//                         printf("Respuesta Farenheit a Kelvin:%f\n",resultado);
//                         }

//                         else if(opcion == 2) {
//                         CelciusAFarenheit(grados);
//                         printf("Respuesta Farenheit a Celcius:%f\n",resultado);
//                         }
//         break;

//         case 3: printf("Selecciona que quieres hacer:\n");
//                 printf("1)Kelvin a Celcius\n2)Kelvin a Kelvin\n");
//                     scanf("%i",&opcion);

//                         if(opcion == 1){
//                         celciusAKelvin(grados);
//                         printf("Respuesta Kelvin a Celcius:%f\n",resultado);
//                         }

//                         else if(opcion == 2) {
//                         FarenheitAKelvin(grados);
//                         printf("Respuesta Kelvin a Kelvin:%f\n",resultado);
//                         }
//         break;

//         default: printf("La opcion seleccionada no existe");
//         break;
//     }


// return 0;
// }



// float kelvinACelcius(float valor){
//     resultado = valor - 273.15;
//         return resultado;
// }
// float farenheithACelcius(float valor){
//     resultado = (valor-32)*(5/9);
//         return resultado;
// }

// float celciusAKelvin(float valor){
//     resultado = valor + 273.15;
//         return resultado;
// }
// float FarenheitAKelvin(float valor){
//     resultado = (valor-32)*(5/9) + 273.15;
//         return resultado;
// }

// float kelvinAFarenheit(float valor){
//     resultado = (valor - 273.15)*(9/5) + 32;
//     return resultado;
// }
// float CelciusAFarenheit(float valor){
//     resultado = (valor * (9/5)) + 32;
//         return resultado;
// }