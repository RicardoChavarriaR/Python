#include <stdio.h>

double factorial(double numero);
double funcionCoseno(double k, double x);

int main(){
    
    printf("%f\n\n",funcionCoseno(138/10,45));

return 0;
}

// Número factorial
double factorial(double numero){
        int resultadoFactorial = 1;
            if(numero == 1 || numero == 0) return resultadoFactorial;

    for(int i=1; i<=numero; i++){
        resultadoFactorial *= i;
    }
        return resultadoFactorial;
}


double funcionCoseno(double k, double x){
    double resultado = (pow(-1,k)*pow(x,2*k))/(factorial(2*k));
    return resultado;
}