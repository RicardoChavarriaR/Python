#include <stdio.h>
#include <string.h>

struct Direccion{
    char calle[30];
    short numero;
    char colonia[20];
    int CP;
}persona0;

struct Alumno{
    int numCuenta;
    char nombre[20];
    char apellido[20];
    float promedio;
    struct Direccion direccion;
}alumno0;


int main(){
        fflush(stdin);
    strcpy(alumno0.direccion.calle,"Romina");
    fflush(stdin);
    strcpy(persona0.colonia,"Xalatlaco");
    fflush(stdin);

    printf("Calle del alumno:\n%s",alumno0.direccion.calle);
    printf("\nColonia de la persona:\n%s",persona0.colonia);


        struct Alumno *apAlumno;
        apAlumno = &alumno0;

            strcpy(apAlumno->direccion.calle,"Calle Alvarino");
    
    printf("\nCalle del alumno:\n%s\n",alumno0.direccion.calle);

return 0;
}