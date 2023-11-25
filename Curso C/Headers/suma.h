
    float x=0,y=0,z=0;

void X(float y, float z);
void Y(float x, float z);
void Z(float x, float y);

void X(float y, float z){
    x = (-10+5*y+z);
    printf("x: %.6f\n",x);
}

void Y(float x, float z){
    y = (20-2*x-4*z);
    printf("y: %.6f\n",y);
}


void Z(float x, float y){
    z = (6-x+2*y);
    printf("z: %.6f\n\n",z);
}