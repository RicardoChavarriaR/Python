#include <stdio.h>
//Palabras importantes para memorizar libreria
/*
Todas comienzan con str
1. string copy
2. string concatenation
3. string compare
4. string lenght
5. string lower
6. string upper
7. string return char
8. string return reverse
*/





// ************************************** strcpy(Destino,Fuente) *******************************************************
// Permite copiar de una cadena de texto a otra
/*
 El destino debe ser igual o mayor que el array origen
 y que además sobreescribe el contenido del destino
 (de existir)
*/

// #include <string.h>

// int main(){
//     char Origen[]="Programacion";
//     // Dado que programación tiene 12 caracteres
//     //Creamos el array destino de la misma dimensión

//     char Destino[12];
//     //! Copiamos el contenido y lo mostramos

//     strcpy(Destino,Origen);
//     printf("%s",Destino);


// return 0;
// }

// ************************************** strcat(Destino,Fuente) *******************************************************

/* Concatena (agrega) la cadena fuente en el destino 
   debes considerar que la cadena destino debe tener
   un tamaño tal que pueda albergar la cadena resultante
*/

//#include <string.h>

// int main(){
//     char Cadena1[]="Jorge",Cadena2[]="Ricardo";
//     char Final[50]; // Puede almacenar hasta 50 caracteres con más da errores

//     // Concatenamos
//     strcat(Final,Cadena1);
//     strcat(Final,"-");
//     strcat(Final,Cadena2);
//     printf("%s",Final); // Imprime Jorge-Ricardo


// return 0;
// }

// ************************************** strcmp(Cadena1,Cadena2) *******************************************************

/*
Compara dos cadenas de texto caracter a caracter, es case-sensitive
Esta función devuelve un valor entero correspondiente a la diferencia
de valor decimal según el código ASCII
*/

// Si Cadena1 es        Entonces devuelve
// Igual que Cadena2            0
// Mayor que Cadena2          n > 0
// Menor que Cadena2          n < 0

// #include <string.h>

// int main(){
//     char ClaveSecreta[] = "Python";
//     char UsuarioDigito[128];
//     int IntentosRestantes = 3;

//     do{
//         printf("\n\nEscribe la clave secreta: \n");
//         fflush(stdin);
//         scanf("%s",&UsuarioDigito);

//         // Validación de contraseña!!

//         if(strcmp(ClaveSecreta,UsuarioDigito)==0){
//             printf("\nBienvenido al sistema!!");
//             break;
//         } else{
//             IntentosRestantes--;
//             printf("Clave secreta incorrecta le quedan %i intentos",IntentosRestantes);
//         }
    
//     }while(IntentosRestantes>0);

// return 0;
// }


// ************************************** strlen(Cadena) *******************************************************

/*
Devuelve un entero que represente la longitud de una cadena de texto
incluyendo los espacios en blanco, pero excluyendo el carácter nulo
*/

// #include <string.h>

// int main(){
// //La dimensión del array es de 200, pero la cadena puede ser menor
//     char array[200];
//     printf("Ecribe cualquier cosa:\n");
//     fflush(stdin);
//     scanf("%s",&array);
//     printf("\nLa longitud del array es: %i",strlen(array));

// return 0;
// }

// ************************************** strlwr/strupr *******************************************************
/*
Convierten a mayúsculas o a minúculas dependiendo cual usamos
*/

// #include <string.h>

// int main(){
// // Caso Lower-Case
//     char texto[100];
//     printf("\nEscribe un texto con mayusculas y minusculas:\n");
//     fflush(stdin);
//     gets(texto); //Utilizamos "gets" en lugar de "scanf" por los espacios

//     printf("\nEl nuevo texto en minusculas es el siguiente:\n");
//     printf("%s\n",strlwr(texto));

// // Caso Upper-Case
//     printf("\nEl nuevo texto en mayusculas es el siguiente:\n");
//     printf("%s\n\n",strupr(texto));


// return 0;
// }

// ************************************** strlwr/strupr *******************************************************
#include <string.h>

int main(){
    char Abecedario[]= "abcdefghijklmnopqrstuvwxyz";
    char Corte;

    printf("\nLetra donde se cortara el abecedario:\n");


return 0;
}