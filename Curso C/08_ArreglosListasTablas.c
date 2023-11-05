//******************************************* Arreglos Multidimensionales ***************************************************
// #include <stdio.h>


// int main(){
//     int hola[2][3] = {1,2,3,4,5,6};

//         printf("hola[1][2]: %i",hola[1][1]);


// return 0;
// }

//******************************************* Arreglos Multidimensionales #2 ***************************************************
// #include <stdio.h>
//     int arreglo[10],bucle = 1,opcion;

//     void DatosArreglo(int arreglo[]);
//     void LLenarDatos(int arreglo[]);
//     void SumaElementos(int arreglo[]);
//     void MultiplicaElementos(int arreglo[]);
//     void SumaElementosTres(int arreglo[]);
//     void MultiplicaTres(int arreglo[]);


// int main(){
    
//     for(int i=0; i<10; i++){
//         printf("Escribe el valor del arreglo en la posicion [%i]: ",i);
//         scanf("%i",&arreglo[i]);
//     }

//     while(bucle){
//         printf("\nSelecciona la opcion que quieres realizar:\n");
//         printf("1) Ingresar o modificar los elementos del arreglo \n2) Mostrar la suma de los elementos\n");
//         printf("3) Realizar la multiplicacion de los elementos \n4) Realizar la suma solo de los elementos que son divisibles entre 3\n");
//         printf("5) Multiplicar por 3 cada elemento del arreglo \n0) Salir\n");
//            scanf("%i",&opcion);

//            switch (opcion){
//            case 1:  printf("\n1) Ingresar o modificar los datos del arreglo\n");
//                     DatosArreglo(arreglo);
//                     LLenarDatos(arreglo);
//                         printf("El nuevo arreglo es:\n");
//                             DatosArreglo(arreglo);
//             break;

//            case 2:  printf("\n2) Mostrar la suma de los elementos\n");
//                     DatosArreglo(arreglo);
//                     SumaElementos(arreglo);
//             break;

//            case 3:  printf("\n3) Realizar la multiplicacion de los elementos\n");
//                     DatosArreglo(arreglo);
//                     MultiplicaElementos(arreglo);
//             break;

//            case 4:
//             break;  printf("\n4) Realizar la suma solo de los elementos que son divisibles entre 3\n");
//                     DatosArreglo(arreglo);
//                     (arreglo);

//            case 5:  printf("\n5) Multiplicar por 3 cada elemento del arreglo \n");
//                     DatosArreglo(arreglo);
//                     MultiplicaTres(arreglo);
//             break;

//            case 0: bucle = 0; 
//             break;

           
//            default: printf("La opcion seleccionada no existe");
//             break;
//            }
//     }


// return 0;
// }





// void DatosArreglo(int arreglo[]){
//     for(int i=0; i<10; i++){
//         printf("Posicion [%i] = %i\n",i,arreglo[i]);
//     }
// }

// void LLenarDatos(int arreglo[]){
//     for(int i = 0; i<10; i++){
//         printf("Escribe el numero para el arreglo en la posicion [%i]:\n",i);
//         scanf("%d",&arreglo[i]);
//     }
// }

// void SumaElementos(int arreglo[]){
//     int sumatoria = 0;
//         for(int i=0; i<10; i++){
//             sumatoria += arreglo[i];
//         }

//             printf("La suma de todos los valores del arreglo es de: %i\n",sumatoria);
// }

// void MultiplicaElementos(int arreglo[]){
//     int sumatoria = 1;
//         for(int i=0; i<10; i++){
//             sumatoria *= arreglo[i];
//         }

//             printf("La multiplicacion de todos los elementos es: %i\n",sumatoria);
// }

// void SumaElementosTres(int arreglo[]){
//         int sumatoria = 0;
//         for(int i=0; i<10; i++){
//             if(arreglo[i]%3==0){
//                 sumatoria += arreglo[i];
//             }
//         }

//             printf("La suma de los elementos dvisible entre 3 es de: %i\n",sumatoria);
//     }

// void MultiplicaTres(int arreglo[]){
//     for(int i=0; i<10; i++){
//         arreglo[i] *= 3;
//     }

//         for(int j=0; j<10; j++){
//             printf("\nEl arreglo multiplicado por 3 en la posicion: [%i] es: %i\n",j,arreglo[j]);
//         }

// }

//******************************************* Arreglos Multidimensionales #2 ***************************************************

// #include <stdio.h>

//     int numero=0;
//     int division=1;
//     int posicion[10];
    
//     void decimalABinario(int arreglo[]);

// int main(){
    
//     printf("Escribe el numero que deseas transformar a binario puro");
//     scanf("%i",&numero);

//         for(int i=0; i>=1; i++){
//             if(numero%2==0) {
//                 printf("%i",numero);
//                 numero /= 2;
//             }
//             else{
//                 numero --;
//                 printf("%i",numero);
//                 numero /= 2;
//             }
//         }
// return 0;
// }

// void decimalABinario(int arreglo[]){
    
// }

// #include <stdio.h>
//     int valor0 = 0;

// int main(){
//     //Aqui tenemos un ejemplo de un programa
//     for(int i=0; i<10; i++){
//         printf("Escribe el número de tu preferencia:\n");
//     }


// return 0;
// }