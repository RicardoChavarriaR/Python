// #include <stdio.h>

// void cuentaRegresiva(int numeroActual);

// int main(){
    
//     int n;
//     printf("Numero a empezar\n");
//         scanf("%d",&n);
//             cuentaRegresiva(n);

// return 0;
// }



// void cuentaRegresiva(int numeroActual){
//     // Si el número es menor que 0 ya terminamos
//     if(numeroActual<0) return;
//     else{
//     //En caso contrario, muestra el número y se ejecuta asi misma con un decremento
//         printf("\n%d",numeroActual);
//         cuentaRegresiva(numeroActual - 1);
//     }
// }

//********************************************* FactoriaL ***********************************************************
#include <stdio.h>
int FactoriaL(int numero);

int main(){
    int n;
        printf("Factorial de:");
        scanf("%d",&n);
            printf("%i\n",FactoriaL(n));    


return 0;
}

int FactoriaL(int numero){
    int resultado;
        if(numero<2) return 1;
        else resultado = FactoriaL(numero - 1)*numero;
        return resultado;
}