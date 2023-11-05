// Hacer una lista con 10 numeros, luego pedirle al usuario que digite un número
// con una búsqueda secuencial determinar si el número existe en la lista o no
// e indicar en que posición se encuentra

// #include <stdio.h>

// char é = 130;
// char ú = 163;

// int main(){
//     int a[10] = {2,4,6,8,0,1,3,5,7,9};
//     int i, dato;
//     char band = 'F';

//         printf("Escribe un n%cmero:\n",ú);
//         scanf("%i",&dato);   

// //******** Búsqueda secuencial
//     i = 0;
//     while((band=='F'&&(i<10))){
//         if(a[i]==dato) band = 'V';
//             i++;
//     }

//     if(band == 'F') printf("\nEl n%cmero no existe en la lista\n",ú);
//     else if(band == 'V') printf("\nEl n%cmero existe en la lista, posicion: %i\n",ú,i);

// return 0;
// }

//******************************************************Búsqueda Binaria********************************************************
/*
Hacer una arreglo de 10 números desordenados,
luego ordenarlos con el método de burbuja
después pedir un dato a buscar y utilizar
la búsqueda binaria para determinar si existe o no
*/

// #include <stdio.h>
//     int numeros[] = {2,5,4,3,1};
//     int aux = 0;

// int main(){
//     /*Algoritmo método burbuja*/
//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             if(numeros[j] > numeros[j+1]){
//                 aux = numeros[j];
//                 numeros[j] = numeros[j+1];
//                 numeros[j+1] = aux;
//             }
//         }
//     }

//     for(int k=0; k<=5; k++){
//         printf("%i",numeros[k]);
//     }
// return 0;
// }




