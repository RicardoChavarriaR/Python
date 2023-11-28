#include <stdio.h>
#include "Evaluaciones.h"

int main(){
 for(int i = 0; i < 7; i++){ 
    ValoresAnteriores(x,y,z,w);   
    printf("Iteracion %d\n",i);
    X(w,z);
    Y(z,w);
    Z(w,x);
    W(x,y,z);
    ERROR(xa,x);
}
comprobacion(x,y,z,w);

return 0;
}

#include <stdio.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_eigen.h>

int main() {
    gsl_matrix *m = gsl_matrix_alloc(3, 3); // Crear una matriz 3x3

    // Llenar la matriz (aquí puedes introducir tus valores)
    gsl_matrix_set(m, 0, 0, 1.0);
    gsl_matrix_set(m, 0, 1, 2.0);
    gsl_matrix_set(m, 0, 2, 3.0);
    gsl_matrix_set(m, 1, 0, 2.0);
    gsl_matrix_set(m, 1, 1, 4.0);
    gsl_matrix_set(m, 1, 2, 5.0);
    gsl_matrix_set(m, 2, 0, 3.0);
    gsl_matrix_set(m, 2, 1, 5.0);
    gsl_matrix_set(m, 2, 2, 6.0);

    gsl_vector_complex *eval = gsl_vector_complex_alloc(3); // Vector para almacenar los eigenvalores
    gsl_matrix_complex *evec = gsl_matrix_complex_alloc(3, 3); // Matriz para almacenar los eigenvectores

    gsl_eigen_nonsymmv_workspace *w = gsl_eigen_nonsymmv_alloc(3); // Espacio de trabajo

    gsl_eigen_nonsymmv(m, eval, evec, w); // Calcular eigenvalores y eigenvectores

    gsl_eigen_nonsymmv_free(w); // Liberar espacio de trabajo

    // Imprimir eigenvalores y eigenvectores
    printf("Eigenvalores:\n");
    for (int i = 0; i < 3; ++i) {
        gsl_complex eval_i = gsl_vector_complex_get(eval, i);
        printf("%d: %f + %fi\n", i, GSL_REAL(eval_i), GSL_IMAG(eval_i));
    }

    printf("\nEigenvectores:\n");
    for (int i = 0; i < 3; ++i) {
        gsl_complex eval_i = gsl_vector_complex_get(eval, i);
        gsl_vector_complex_view evec_i = gsl_matrix_complex_column(evec, i);
        printf("%d: ", i);
        for (int j = 0; j < 3; ++j) {
            gsl_complex z = gsl_vector_complex_get(&evec_i.vector, j);
            printf("%f + %fi\t", GSL_REAL(z), GSL_IMAG(z));
        }
        printf("\n");
    }

    gsl_matrix_free(m);
    gsl_vector_complex_free(eval);
    gsl_matrix_complex_free(evec);

    return 0;
}

