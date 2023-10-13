#include <stdio.h>
// Determinar la suma de los números hasta el indicado por el usuario
// int main(){
//     int contador,numero,suma = 0;

//     printf("Escribe hasta que numero quieres que  se haga la suma:\n");
//     scanf("%i",&numero);

//     contador = 1;

//     while (contador<=numero){
//         suma += contador;
//         contador++;
//     }
    
//     printf("La suma hasta el numero: %i es de: %i",numero,suma);

//     return 0;
// }


//******************************** Poner todos los múltiplos de 5 hasta n ****************************************
// int main(){
//     int numero = 0,iterador = 0;

//     printf("Valor n multiplo de 5:\n");
//     scanf("%i",&numero);

//     while(iterador<=numero){
//         iterador++;
//         if(iterador%5==0){
//             printf("%i Es un numero multiplo de 5\n",iterador);
//         }
//     }

//     return 0;
// }

//******************************** Sumar un número y restar el siguiente ****************************************
// Ejemplo: 1-2+3-4+5-6+7
// Los impares son positivos


// int main(){
//     int sumaPares = 0,sumaImpares = 0,numero = 0,iterador = 0,negativo,sumaGeneral = 0;
//         printf("Hasta que numero quieres sumar:\n");
//         scanf("%i",&numero);
//     iterador = 1;

//     while(iterador<=numero){
//         if(iterador%2==0){
//             negativo = iterador * (-1);
//             sumaPares += negativo;
//         } else{
//             sumaImpares += iterador;
//         }
//         iterador++;
//     }

//     sumaGeneral = sumaImpares + sumaPares;
//     printf("El resultado de la suma es: %i",sumaGeneral);


//     return 0;
// }

//******************************** Verificar si es número primo ****************************************

