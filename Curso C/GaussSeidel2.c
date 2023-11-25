/*
Gauss-Seidel
-- Debe imprimir el sistema de ecuaciones de 3x3
-- La diagonal determinante
-- Las iteraciones utilizadas para la solución 
-- El error
-- La solución del sistema 
-- La comprobación del sistema
*/
#include <stdio.h>
void llenadoDeMatriz();

//Ordenado de la matriz
void impresionDeLaMatriz();
void evaluacionUno();
void evaluacionDos();
void evaluacionTres();
void impresionMatrizDeterminante();

// "x", "y", "z" y error
float x=0,y=0,z=0;
float a,b,c;
float xAnterior=0,yAnterior=0,zAnterior=0;
float errorX=0, errorY=0,errorZ=0;
void evaluacionXYZ(float x, float y, float z);

//Contador de iteraciones:
int iteraciones=6;

//Matriz de prueba
float matriz[3][4] = {{0.1,7.0,-0.3,-19.3},{3.0,-0.1,-0.2,7.85},{0.3,-0.2,10.0,71.4}};
float matrizOrdenada[3][4];

// Comprobador del sistema:
void comprobacionDelSistema();


int main(){
    //LLenado de la matriz
    printf("LLenado de la matriz:\n");
    llenadoDeMatriz();
    printf("\nMatriz Inicial:\n");
    impresionDeLaMatriz();

    //Evaluación Diagonal Determinante
    evaluacionUno();
    evaluacionDos();
    evaluacionTres();
        printf("\nMatriz Ordenada:\n");
    impresionDeLaMatriz();

    //Impresión Matriz Determinante
    printf("\nMatriz determinante:\n\n");
    impresionMatrizDeterminante();

    //Evaluación "x", "y" y "z" y errorX, errorY, errorZ
    printf("\nEscribe la cantidad de iteraciones:\n");
        scanf("%i",&iteraciones);
    evaluacionXYZ(x,y,z);

    //Comprobación del sistema:
    comprobacionDelSistema();
return 0;
}






void llenadoDeMatriz(){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("matriz[%.2f][%.2f]",matriz[i][j]);
            scanf("%f",&matriz[i][j]);
        }
        printf("\n");
    }
}

void impresionDeLaMatriz(){
    printf("\n");
        for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("[%.2f]",matriz[i][j]);
        }
        printf("\n");
    }
}


//Evaluaciones
void evaluacionUno(){
    float datoMatriz00 = matriz[0][0];
    float datoMatriz01 = matriz[0][1];
    float datoMatriz02 = matriz[0][2];
    float datoMatriz03 = matriz[0][3];

    if(matriz[0][0]<matriz[1][0]){
        matriz[0][0] = matriz[1][0];
        matriz[0][1] = matriz[1][1];
        matriz[0][2] = matriz[1][2];
        matriz[0][3] = matriz[1][3];

        matriz[1][0] = datoMatriz00;
        matriz[1][1] = datoMatriz01;
        matriz[1][2] = datoMatriz02;
        matriz[1][3] = datoMatriz03;
    }

}
void evaluacionDos(){
    float datoMatriz00 = matriz[0][0];
    float datoMatriz01 = matriz[0][1];
    float datoMatriz02 = matriz[0][2];
    float datoMatriz03 = matriz[0][3];

        if(matriz[0][0]<matriz[2][0]){
        matriz[0][0] = matriz[2][0];
        matriz[0][1] = matriz[2][1];
        matriz[0][2] = matriz[2][2];
        matriz[0][3] = matriz[2][3];

        matriz[2][0] = datoMatriz00;
        matriz[2][1] = datoMatriz01;
        matriz[2][2] = datoMatriz02;
        matriz[2][3] = datoMatriz03;
    }
}
void evaluacionTres(){
    float datoMatriz10 = matriz[1][0];
    float datoMatriz11 = matriz[1][1];
    float datoMatriz12 = matriz[1][2];
    float datoMatriz13 = matriz[1][3];

        if(matriz[1][1]<matriz[2][1]){
        matriz[1][0] = matriz[2][0];
        matriz[1][1] = matriz[2][1];
        matriz[1][2] = matriz[2][2];
        matriz[1][3] = matriz[2][3];

        matriz[2][0] = datoMatriz10;
        matriz[2][1] = datoMatriz11;
        matriz[2][2] = datoMatriz12;
        matriz[2][3] = datoMatriz13;
    }
}

void evaluacionXYZ(float x, float y, float z){
    for(int i=0; i<iteraciones; i++){
        xAnterior = x;
        yAnterior = y;
        zAnterior = z;
        printf("\nEvaluacion: #%i",i+1);
    x = (-(matriz[0][1]*y)-(matriz[0][2]*z)+matriz[0][3])/matriz[0][0];
        printf("\nx = %.6f\n",x);
    y = (-(matriz[1][0]*x)-(matriz[1][2]*z)+matriz[1][3])/matriz[1][1];
        printf("y = %.6f\n",y);
    z = (-(matriz[2][0]*x)-(matriz[2][1]*y)+matriz[2][3])/matriz[2][2];
        printf("z = %.6f\n",z);

            errorX = ((x-xAnterior)/x)*100;
            errorY = ((y-yAnterior)/y)*100;
            errorZ= ((z-zAnterior)/z)*100;

        printf("    errorX: %.6f\n",errorX);
        printf("    errorY: %.6f\n",errorY);
        printf("    errorZ: %.6f\n",errorZ);
    }

    a = x;
    b = y;
    c = z;
}
void impresionMatrizDeterminante(){
    printf("[%.2f] [0.00]  [0.00]\n",matriz[0][0]);
    printf("[0.00] [%.2f]  [0.00]\n",matriz[1][1]);
    printf("[0.00] [0.00]  [%.2f]\n",matriz[2][2]);
}

void comprobacionDelSistema(){
        float resultadoX,resultadoY,resultadoZ;
    printf("\nSistema:\n\n");
    printf("[%.2f * %.2f][%.2f * %.2f][%.2f * %.2f] =\n",matriz[0][0],a,matriz[0][1],b,matriz[0][2],c);
    printf("[%.2f * %.2f][%.2f * %.2f][%.2f * %.2f] =\n",matriz[1][0],a,matriz[1][1],b,matriz[1][2],c);
    printf("[%.2f * %.2f][%.2f * %.2f][%.2f * %.2f] =\n\n",matriz[2][0],a,matriz[2][1],b,matriz[2][2],c);

    resultadoX= matriz[0][0]*a + matriz[0][1]*b + matriz[0][2]*c;
    resultadoY= matriz[1][0]*a + matriz[1][1]*b + matriz[1][2]*c;
    resultadoZ= matriz[2][0]*a + matriz[2][1]*b + matriz[2][2]*c;

    printf("Comprobacion:\n\n");
    printf("[%.3f]+[%.3f]+[%.3f] =%.3f\n",matriz[0][0]*a,matriz[0][1]*b,matriz[0][2]*c,resultadoX);
    printf("[%.3f]+[%.3f]+[%.3f] =%.3f\n",matriz[1][0]*a,matriz[1][1]*b,matriz[1][2]*c,resultadoY);
    printf("[%.3f]+[%.3f]+[%.3f] =%.3f\n",matriz[2][0]*a,matriz[2][1]*b,matriz[2][2]*c,resultadoZ);
}