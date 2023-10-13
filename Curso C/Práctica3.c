#include <stdio.h>
#include <math.h>


int main(){
    //Acentos
    int o = 162;

    //Valores de las ecuaciones
    float xl = 0, xu = 3, xr = ((xl+xu)/2);
    float funcionInicial = ((-xl)+2)*((-xu)+2);
    float evaluacion = ((-xl)+2)*((-xr)+2);
    float xrAnterior,error;


    printf("Evaluacion: %f\n",funcionInicial);
    printf("xr: %f\n",xr);

    if(evaluacion>0) xl = xr;
    else xu = xr;

    //Comienza el bucle for    
    for (float i = 0; i < 15; i++){
        //Número de iteración y valores iniciales de xl,xu,xr respectivamente
        printf("Iteraci%cn: %.0f\n",o,i);
        printf("xl: %f\n",xl);
        printf("xu: %f\n",xu);
        printf("xr: %f\n",xr);

        //xrAnterior se usa para calcular el error
        xrAnterior = xr;
        xr = ((xl+xu)/2);
        
        evaluacion = ((-xl)+2)*((-xr)+2);
        printf("Evaluacion: %f\n",evaluacion);
        if (evaluacion>0) xl = xr;
        else xu = xr;

        //Error
        error = fabs(((xr-xrAnterior)/xr))*100;
        printf("Error: %f\n",error);
        
        //Espacio
        printf("\n");
    }
    

    return 0;
}
// #include <stdio.h>


// int main(){
//     //Acentos
//     int o = 162;

//     float xl = 0, xu = 3, xr = ((xl+xu)/2);
//     float funcionInicial = ((-xl)+2)*((-xu)+2);
//     float evaluacion = ((-xl)+2)*((-xr)+2);


//     printf("%f\n",funcionInicial);
//     printf("%f\n",xr);

//     if(evaluacion>0) xl = xr;
//     else xu = xr;
    
//     for (float i = 0; i < 3; i++){
//         printf("Iteraci%cn: %.0f\n",o,i);
//         printf("xl: %f\n",xl);
//         printf("xu: %f\n",xu);
//         printf("xr: %f\n",xr);
//         xr = ((xl+xu)/2);
        
//         evaluacion = ((-xl)+2)*((-xr)+2);
//         printf("Evaluacion: %f\n",evaluacion);
//         if (evaluacion>0) xl = xr;
//         else xu = xr;
        
//     }