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
// #include <stdio.h>

// int main(){
//     int a = 19;
//     int b = 20;
//     //Declaramos un apuntador a la referencia de las 

//     int *ApuntadorA = &a;
//     int *ApuntadorB = &b;

//     //Le cambiamos el valor al 
//     *ApuntadorA = 123;
//     //Aqui se notara que cambio el valor de la variable a la que se 
//     printf("%i",a);

//     //Direcciones de memoria:
//         printf("\n%p",&a);
//         printf("\n%p\n",&b);

//         printf("\n%p",ApuntadorA);
//         printf("\n%p",ApuntadorB);

// return 0;
// }

//*********************************Paso de parámetros por varlor*************************************

/*
Los parámetros por valor son en los que pasamos una variable a una determinada función, solo copia el valor que esta contiene en una memoria
temporal la cual desaparece luego de que la función termina
*/

// #include <stdio.h>
    
//     void agregar(int a){
//         a += 10;
//     }

// int main(){
//     int numero;
//     printf("Escribe el numero:\n");
//         scanf("%i",&numero);
//     printf("\nValor antes de la funcion: %i",numero);
//             agregar(numero);
//     printf("\nValor despues de la funcion: %i",numero);

// return 0;
// }   

//*********************************Paso de parámetros por referencia*************************************
/*
En este tipo de funciones el valor de la variable si se modifica, ya que pasa como parámero la direccción de memoria de esta usando el operador "&"
en la función, el argumento se recibe como el valor que alberga esa dirección de memoria usando el operador *.
*/

// #include <stdio.h>
    
//     void agregar(int *a){
//         *a += 10;
//     }

// int main(){
//     int numero,numero2;
//     printf("Escribe el numero:\n");
//         scanf("%i",&numero);
    
//     printf("\nValor antes de la funcion:%i",numero);
//         agregar(&numero);
//     printf("\nValor despues de la funcion: %i",numero);

//     printf("\nEscribe el segundo valor de la funcion:\n");
//         scanf("%i",&numero);
//         agregar(&numero);
//     printf("\nValor despues de la funcion(2): %i",numero);

// return 0;
// }

//*********************************Apuntadores con arreglos*************************************
// #include <stdio.h>

// void main(){
//     //Declaramos un arreglo con 5 índices:
//     int array[5] = {1,2,3,4,5};

//     //Ahora un apuntador al inicio de la variable:
//     int *apuntadorArray = &array[0];

//     //Con esto podemos desplazarnos por el array sin necesidad de saber su dimensión

//     while(*apuntadorArray != NULL){
//         printf("\n %i",*apuntadorArray);
//         apuntadorArray++; //Se va recorriendo el array por las posiciones
//     }
// }


//*********************************Ejercicio número 1*************************************
//El objetivo del programa es operar variables de manera indirecta
// #include <stdio.h>

// int main(){
//     int w = 10, x = 20, y = 30, z = 40, r1, r2, r3;
//     int *p1,*p2,*p3,*p4;

//     p1 = &w;
//     p2 = &x;
//     p3 = &y;
//     printf("%d\n",w);
//     p4 = p1; //p4 =20;
//     *p4 = 20;   //Lo que apunta "p4" ahora es 20
//     printf("%d\n",w);
//     r1 = *p1 + *p2;
//     r2 = *p3 * *p4;
//     r3 = *p2 + *p3;

// return 0;
// }

//*********************************Ejercicio número 1*************************************
// #include <stdio.h>
//     struct resultados{
//         int resultado;
//         int suma;
//         int resta;
//         float division;
//         float multiplicacion;
//     }prueba1;

// int main(){
    
// prueba1.suma = 2;

// printf("suma:\n%i",prueba1.suma);
// return 0;
// }

//************************************************************Refuerzo de apuntadores 2***********************************************************
// #include <stdio.h>

// int arr1[4][5][2], var;
// int *point;
// int main(){
// point = &arr1[0][0][0]; //Incorrecto,, aquí necesitamos ponerle el amperson al "arr1" además de los valores que le corresponden "&arr[0][0][0];"
// var = 1;

//     for(int i = 0; i<4; i++){
// 	    for(int j = 0; j<5; j++){
// 		    for(int k = 0; k<2; k++){
// 			    printf("[%d]",arr1[i][j][k]);
//                 var += 2;
// 		    }
//         printf("\n");
// 	    }
//     printf("\n");
//     }   

// int a = *(point + 4);
// int b = *(point + 16);
// int c = *(point + 23);

//     /*c) Utilizando el apuntador y un solo ciclo, recorre el arreglo de tal manera que se modifiquen todos sus valores de la siguiente manera:
//     planos:
//         0) valores multiplos de 4
//         1) valores multiplos de 6
//         2) valores multiplos de 7
//         3) valores multiplos de 5
//     */

//    point = &arr1[0][0][0];

//    for(int cont=0; cont<40; cont++){
    
//         if(cont < 10){
//             *(point + cont) = 4*(cont +1);
//         }if(cont >= 10 && cont < 20){
//             *(point + cont) = 6*(cont - 9);
//         }if(cont >= 20 && cont < 30){
//             *(point + cont) = 7*(cont - 19);
//         }if(cont >= 30 && cont < 40){
//             *(point + cont) = 5*(cont - 29);
//         }
//    }

//    printf("\nEl areglo queda de la siguiente manera:\n");

//     for(int f=0; f<4; f++){
//         for(int g=0; g<5; g++){
//             for(int h=0; h<2; h++){
//                 printf("[%d]",arr1[f][g][h]);
//             }
//         printf("\n");
//         }
//     printf("\n");
//     }
// }

//***********************************Alfabeto en mayúsculas**********************************************************************
// #include <stdio.h>
//     char caracter;
//     char *apuntadorCaracter;

// int main(){
//     apuntadorCaracter = &caracter;
//     for(caracter='A'; caracter<='Z'; caracter++){
//         printf("%c ",*apuntadorCaracter);
//     }
// return 0;
// }
//***********************************Alfabeto en mayúsculas**********************************************************************
#include <stdio.h>
    int matriz[3][4] = {{1,2,3,4}
                       ,{5,6,0,8},
                        {9,10,11,12}};
    int *apuntador;
    int *apuntador2;

int main(){

    apuntador2 = &matriz[0][0];
    prueba();
    printf("\n%d ",*(apuntador2 + 6));
return 0;
}




void prueba(){
    apuntador = &matriz[0][0];
    matriz[1][2] = 99;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",*(apuntador + j));
        }
    }
}