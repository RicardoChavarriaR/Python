#include <stdio.h>
// 01_Primer ejercicio
// Pedir al usuario que digite dos números

// int main()
// {
//     float num1,num2; //Variables
//     float suma,resta,division,multiplicacion;

//     printf("Escribe dos numeros: \n");
//     scanf("%f %f",&num1,&num2); //Escaneo de dos números

//     suma = num1 + num2;
//     resta = num1 - num2;
//     division = num1 / num2;
//     multiplicacion =num1 * num2;
//     printf("La suma es: %.2f, la resta es: %.2f, la division es: %.2f, la multiplicacion es: %.2f",suma,resta,division,multiplicacion);
//     return 0;
// }



// Area de figuras geométricas

int main(){
    float base,altura,area;
    printf("Este programa calcula el area de un triangulo\n");
    printf("Inserta la base y la altura\n");
    scanf("%f %f",&base,&altura);

    area = (base*altura)/2;
    printf("El area del triangulo es: %.2f",area);
    return 0;
}