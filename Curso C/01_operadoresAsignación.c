#include <stdio.h>

int variable0 = 24; //Esta es una variable global

int main(){

    // int a = 23;
    // printf("Hola Mundo");
    // printf("\nHola mundo: %i",a);

    int b = 9, c = 2, d = 2;
    int suma = b+c+d;
    for (int i = 0; i < 10; i++){
        printf("%i Hola mundo\n",i);
    }
    
    printf("Aqui tenemos los valores %i%i%i\n",b,c,d);
    printf("La suma es: %i",suma);
    return 0;
}
