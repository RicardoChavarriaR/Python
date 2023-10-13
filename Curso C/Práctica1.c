#include <stdio.h>

int main(){
    float x,m,b,m2,b2,interseccionX,interseccionY;
    int o = 162;

//############ Valores de la primera ecuación ####################
    printf("\n\nInserta el valor de la primera ecuaci%cn (y=mx+b)\n",o);
    printf("Valor de la pendiente m:\n");
    scanf("%f",&m);

    printf("Valor de la intersecci%cn b:\n",o);
    scanf("%f",&b);

//############ Valores de la segunda ecuación ####################
    printf("\nValores de la segunda ecuaci%cn:\n",o);
    printf("Valor de la pendiente m2:\n");
    scanf("%f",&m2);

    printf("Valor de la intersecci%cn b2:\n",o);
    scanf("%f",&b2);

//############ Valores de los despejes para "x" y "y" ####################
    interseccionX = ((b-b2)/(m2-m));
    interseccionY = ((m*interseccionX) + b);

//############ Condicionales ####################
    if(m==m2 && b==b2) printf("Las rectas tienen soluciones infinitas porque son iguales");
    else if(m==m2) printf("Las rectas son paralelas");
    else printf("La intersecci%cn es: (%.2f,%.2f)",o,interseccionX,interseccionY);

    printf("\n\n");
    return 0;
}

