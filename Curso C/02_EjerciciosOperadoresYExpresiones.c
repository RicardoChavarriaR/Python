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

//int main(){
    // ############ Area de un triangulo ########################################
    // float base,altura,area;
    // printf("Este programa calcula el area de un triangulo\n");
    // printf("Inserta la base y la altura\n");
    // scanf("%f %f",&base,&altura);

    // area = (base*altura)/2;
    // printf("El area del triangulo es: %.2f",area);

    // ############ Area de un cuadrado ##########################################
    // float lado,area;
    // printf("Este programa calcula el area de un cuadrado\n");
    // printf("Inserta la longitud del lado:\n");
    // scanf("%f",&lado);

    // area = pow(lado,2);
    // printf("El area del cuadrado es: %.2f",area);
    // return 0;
//}



// ###################################Transformar######################################
// años a meses
// meses a semanas
// semanas a dias
// dias a horas


// int main(){
//     int edad,meses,semanas,dias,horas;
//     printf("Digita tu edad:\n");
//     scanf("%i",&edad);

//     meses = edad*12;
//     semanas = meses*4;
//     dias = semanas*7;
//     horas = dias*24;

//     printf("Tu edad en Meses es de: %i\n",meses);
//     printf("Tu edad en Semanas es de: %i\n",semanas);
//     printf("Tu edad en Dias es de: %i\n",dias);
//     printf("Tu edad en Horas es de: %i\n",horas);

//     return 0;
// }

//############################ Area de un trapecio ##########################################
// int main(){
//     float baseMayor,baseMenor,altura,area = 0;

//     printf("Escribe la base mayor:\n");
//     scanf("%f",&baseMayor);
//     printf("Escribe la base menor:\n");
//     scanf("%f",&baseMenor);
//     printf("Escribe la altura:\n");
//     scanf("%f",&altura);

//     area = (((baseMayor + baseMenor)*altura)/2);
//     printf("El area es: %.2f",area);
//     return 0;
// }

//############################## Calificaciones Alumnos ############################################

/*Un alumno desea saber cual sera su calificacion final en la materia de algoritmos
Dicha calificacion se compone de los siguientes porcentajes:

55% Del promedio de las tres calificaciones parciales
30% De la calificacion del examen final
15% De la calificacion del trabajo final
*/

int main(){
    float p1,p2,p3,promedioParcial,examenFinal,trabajoFinal;
    float promedioParciales,promedioExamenes,promedioTrabajoFinal,calificacionFinal;

    printf("Escribe las tres calificaciones de los examenes parciales:\n");
    scanf("%f %f %f",&p1,&p2,&p3);

    printf("Escribe la calificacion del examen final:\n");
    scanf("%f",&examenFinal);

    printf("Escribe la calificacion del trabajo final:\n");
    scanf("%f",&trabajoFinal);

    promedioParcial = (p1+p2+p3)/3;

    promedioParciales = promedioParcial * 0.55;
    promedioExamenes = examenFinal * .30;
    promedioTrabajoFinal = trabajoFinal * .15;

    calificacionFinal = promedioParciales + promedioExamenes + promedioTrabajoFinal;
    printf("La calificacion final es: %.2f",calificacionFinal);

    (calificacionFinal > 7) ? printf("\naprobaste chavo :v") : printf("\nReprobaste chavo :v");


return 0;
}
