#include <stdio.h>

int main(){

int x = 2,n = 4;
float sumaIndividual = 0,sumaTaylor = 0,fact=1,nuevoFactorial;



for (float i = 1; i <= n; i++){
fact *= i;


        for (float z = 1; z <= i; z++){

        sumaIndividual = (pow(x,z))/(fact);
        printf("z: %f\n",z);
    }
        sumaTaylor += sumaIndividual;
        printf("Suma Taylor: %f\n",sumaTaylor + 1);
        printf("Factorial: %.2f\n",fact);
        printf("Suma individual: %f\n",sumaIndividual);
        printf("\n");

}
    return 0;
}

// int main(){

// int x = 2,n = 4;
// float sumaIndividual = 0,sumaTaylor,fact=1;

// for (float i = 1; i <= n; i++){
// fact *= i;

//         for (float z = 0; z < i; z++){
//         sumaIndividual = z/fact;
//         printf("z: %f\n",z);
//     }
//         printf("Factorial: %.2f\n",fact);
//         printf("Suma individual: %f\n",sumaIndividual);
//         printf("\n");

// }

//     return 0;
// }

// int main(){

// int x = 2,n = 4;
// float sumaIndividual = 0,sumaTaylor = 0,fact=1,nuevoFactorial;



// for (float i = 1; i <= n; i++){
// fact *= i;


//         for (float z = 1; z <= i; z++){

//         sumaIndividual = (pow(x,z))/(fact);
//         printf("z: %f\n",z);
//     }
//         sumaTaylor += sumaIndividual;
//         printf("Suma Taylor: %f\n",sumaTaylor + 1);
//         printf("Factorial: %.2f\n",fact);
//         printf("Suma individual: %f\n",sumaIndividual);
//         printf("\n");

// }
//     return 0;
// }
