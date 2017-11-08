#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
    Matriz A;
    Matriz adjA;
    Matriz idenA
    int ordem, i , j;
    double detA = determinante(A);
    printf("Entre com a ordem da matriz: ");
    scanf("%d",&ordem);
    A = criarMatriz(ordem,ordem);
    preencherMatriz(A);
    printf("Original:\n");
    imprimirMatriz(A);
    adjA = adjunta(A);
    printf("Identidade:\n");
    for(i = 0; i < ordem; i++){
        for(j = 0; j< ordem; j++)
            idenA[i][j] = (1/determinante(A))*adjunta(A[i][j]);
    }
    destruirMatriz(A);
    destruirMatriz(adjA);
    destruirMatriz(idenA);
    return EXIT_SUCCESS;
}
