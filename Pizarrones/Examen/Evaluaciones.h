float x,y,z,w;
float error;
float xa,ya,za,wa;
float cx,cy,cz,cw;

void X(float w, float z);
void Y(float z, float w);
void Z(float w, float x);
void W(float x, float y, float z);

void ERROR(float valorAnterior, float valorActual);
void ValoresAnteriores(float x, float y, float z, float w);
void comprobacion(float x, float y, float z, float w);

void X(float w, float z){
    x = (w-3*z)/5;
    printf("X: %f\n",x);
}

void Y(float z, float w){
    y = (1+z+w)/4;
    printf("Y: %f\n",y);
}

void Z(float w, float x){
    z = (2*w-8-3*x)/2;
    printf("Z: %f\n",z);
}

void W(float x, float y, float z){
    w = 2-x+2*y-z;
    printf("W: %f\n",w);
}

void ValoresAnteriores(float x, float y, float z, float w){
    xa = x;
    ya = y;
    za = z;
    wa = w;
}

void ERROR(float valorAnterior, float valorActual){
    error = (x-xa)/x;
    printf("%f\n\n",error);
}

void comprobacion(float x, float y, float z, float w){
    cx=x-2*y+z+w;
    cy=3*x+2*z-2*w;
    cz=4*y-z-w;
    cw=5*x+3*z-w;

        printf("\n%f == 2\n",cx);
        printf("%f == -8\n",cy);
        printf("%f == 1\n",cz);
        printf("%f == 0\n\n",cw);
}