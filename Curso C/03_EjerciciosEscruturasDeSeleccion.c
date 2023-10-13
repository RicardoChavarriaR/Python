#include <stdio.h>

//########################################## Pasar de año #####################################################
//Ver si un alumno va a pasar o no de año
//Un alumno solo tiene derecho a reprobar tres materias para poder pasar de año
//Si reprueba 4 materias no puede pasar de año y recursa

// int main(){
//     int materiasR;
//     int ñ = 164;

//     printf("Cuantas materias has reprobado?\n");
//     scanf("%i",&materiasR);

//     if (materiasR > 3) printf("Estas reprobado tienes que repetir ano");
//     else printf("Felicidades puedes pasar de a%co y debes: %i materias",ñ,materiasR);

//     return 0;
// }

//########################################## Simulador de tienda #####################################################
//Simular una tienda con entradas y salidas de capital

// int main(){
//     int opcion;
//     float agregar,retirar,saldo=3000;

//     printf("\t*************************************************\n");
//     printf("\t*****Este es un simulador de tienda o cajero*****\n");
//     printf("\t*************************************************\n");

// do{ printf("\nSelecciona una opcion:\n");
//     printf("\n1) Depositar dinero");
//     printf("\n2) Retirar dinero");
//     printf("\n3) Salir del cajero");
//     printf("\nOpcion seleccionada:\n");
//     scanf("%i",&opcion);

//     switch (opcion)
//     {
//     case 1: printf("Cuanto dinero quieres depositar?:\n");
//     scanf("%f",&agregar);
//     saldo += agregar;
//     printf("Tu saldo actual es de: %f",saldo);
//         break;
    
//     case 2: printf("Cuanto dinero quieres retirar?");
//     scanf("%f",&retirar);
//     if(retirar>saldo) printf("Tu saldo disponible solo es de %f",saldo);
//     else saldo -= retirar; printf("Tu saldo total es de: %f",saldo);
//     break;
    
//     case 3: printf("Gracias por usar el programa\ hasta la proxima!!!");
//     break;
//     default: printf("La opcion que seleccionaste no existe");
//         break;
//     }}while(opcion != 3);

//     return 0;
// }

//########################################## Signo Aries #####################################################

// #include <string.h>
// int main(){
//     char nombre[20],signo[20];
//     printf("Escribe tu nombre: \n");
//     fgets(nombre,20,stdin); //Aqui podemos utilizar fgets o gets pero la primera opción es segura y mejor
//     strtok(signo,"\n");     //strtok sirve para borrar el salto de linea por defecto del fgets, cada que vea el \n lo va a borrar
//     printf("Tu nombre es: %s\n",nombre);

//     printf("Escribe tu signo\n");
//     fgets(signo,20,stdin);
//     strtok(signo,"\n");

//     if ((strcmp(signo,"Aries") == 0) || (strcmp(signo,"aries") == 0)) printf("Su nombre es: %s",nombre);
//     else printf("Tu signo no es Aries");
    
//     printf("signo: %s",signo);
//     printf("\nnombre: %s",nombre);
//     return 0;
// }


//########################################## Borrar pantalla #####################################################

// #include <stdlib.h>

// int main(){
//     int numero;
//     printf("Programa que borra la pantalla al pulsar el numero ");
//     printf("\n-------------------------------------------------");
//     printf("\nSelecciona la operacion a realizar");
//     printf("\n1)Borrar la pantalla  \n2)Colorear la consola ");
//     scanf("%i",&numero);

//     if (numero == 1){
//         system("cls");
//         printf("Ha borrado la pantalla");
//     }else if(numero == 2){
//         system("color 0e");
//     } else printf("Ha elegido un numero no asignado");
    
// }


//########################################## Borrar pantalla #####################################################