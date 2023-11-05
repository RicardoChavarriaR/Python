//*********************************Demostrar el uso básico de los apuntadores*************************************

/*Cuando una variable se declara de le coloca su nombre, tipo y su dirección de memoria*/
/*
    printf("%i",numero);
    printf("%p",&numero); El "&" se refiere a la dirección de memoria a la que nos dirigimos

        int hola = 100;
        int *hola = &hola; Lo que hace aqui el apuntador es declarar que nos estamos dirigiendo a la dirección de memoria
        en la que esta guardada la variable "hola";
*/
// #include <stdio.h>
    
//     int numero = 3;

// int main(){
//     printf("\n%i\n",numero);
//     printf("\n%p",&numero);

//     char *numero1 = &numero;
//     float *num1 = &numero1, num2;

// return 0;
// }

//*********************************Demostrar el uso básico de los apuntadores*************************************

// #include <stdio.h>

// int main(){
//     int numero = 50;
//     int *pNumero;
//         printf("Dato: %i",numero);              //Dato
//         printf("\nPosicion: %p\n",&numero);     //Posición en la memoria

//     pNumero = &numero;                          //&numero = posición en memoria del número
//         printf("Valor de la variable:\n");
//         printf("Dato: %i\n",numero);
//         printf("Dato: %i\n",*pNumero);

//         printf("Posicion en memoria\n",&numero);
//         printf("\nPosicion: %p",&numero);
//         printf("\nPosicion: %p",pNumero);

            
// return 0;
// }

//*********************************Ejemplo de apuntadores*************************************
#include <stdio.h>

int main(){
    int a = 19;
    int b = 20;
    //Declaramos un apuntador a la referencia de las variables

    int *ApuntadorA = &a;
    int *ApuntadorB = &b;

    //Le cambiamos el valor al apuntador
    *ApuntadorA = 123;
    //Aqui se notara que cambio el valor de la variable a la que se apunta
    printf("%i",a);

return 0;
}