//********************************Sacar promedio de un array*****************************************************

// #include <stdio.h>
//     int numeroDeDatosDelArreglo = 0;
//     int arreglo[10];
//     int suma = 0;

// int main(){
//     // //Cuantos datos queremos sacarle promedio:
//     // printf("Escribe el numero de datos que quieres sacarle promedio:");
//     //     scanf("%i",&numeroDeDatosDelArreglo);
//     //     arreglo[numeroDeDatosDelArreglo];


//     printf("Escribe los valores a los que les deseas sacar promedio:\n");
//     //Pedir los datos
//     for(int i=0; i<10; i++){
//         printf("Numero %i:",(i+1));
//         scanf("%i",&arreglo[i]);
//             suma += arreglo[i];
//     } 

//     //Promedio:
//     float promedio = 0;
//     promedio = suma/(sizeof(arreglo)/4);
//         printf("Promedio de la suma:%f\n",promedio);
//     // int arregloPrueba[] = {2,3,4,5,6,7};
//     // printf("Numero de prueba: %lu\n",sizeof(arregloPrueba)/4);

// return 0;
// }

//********************************Copiar los datos de un array a otro*****************************************************
// #include <stdio.h>
//     void copiandoArrays(int a[], int b[],int tamanio);

// int main(){
//     int arrayUno[5] = {2,3,4,5,6};
//     int arrayDos[5];

//         printf("Copiando Array uno al dos\n\n");
//         copiandoArrays(arrayUno,arrayDos,5);   


// return 0;
// }

// // Función
//     void copiandoArrays(int a[],int b[],int tamanio){
//         printf("b = (");
//         for(int i=0; i<tamanio; i++){
//             b[i] = a[i];
//                     if(i == tamanio - 1){
//                         printf("%i",b[i]);
//                         break;
//                     }
//                 printf("%i,",b[i]);
//         }
//         printf(");");
//     }

//********************************Copiar los datos de un array tipo String a otro*****************************************************
#include <stdio.h>
#include <string.h>
    #define TAMANIO 15

int main(){
    char nombre[TAMANIO],nombre2[TAMANIO];
    printf("Escribe tu nombre:\n");
    gets(nombre);

    strcpy(nombre2,nombre);
        printf("Tu nombre es: %s",nombre2);
            

return 0;
}