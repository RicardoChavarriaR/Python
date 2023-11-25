#include <stdio.h>
    float x=0, y=0, z=0,resultado;

void X(float y, float z){
    x = (7.85+0.1*y+0.2*z)/3;
}

void Y(float x,float z){
    y = (-19.3-0.1*x+0.3*z)/7;
}

void Z(float x, float y){
    z = (71.4-0.3*x+0.2*y)/10;
    printf("\n      (71.4-0.3(%f)+0.2(%f)\n",x,y);
    printf("z:    ------------------------------\n");
    printf("\t\t    10");
}

int main(){
for(int i=0; i<6; i++){
    printf("Vuelta numero: %i\n",i);

    X(y,z);
    printf("%f\n",x);

    Y(x,z);
    printf("%f\n",y);

    Z(x,y);
    // printf("%f\n",z);

    printf("\n");
}

return 0;
}