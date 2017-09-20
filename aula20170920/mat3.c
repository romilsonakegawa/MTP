#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double num, b, calculo=0;
    printf("Entre com um número e a base desejada para calcular o logaritmo ");
    scanf("%lf, %lf", &num, &b );
    calculo = log10(num)/log10(b);
    printf("O numero calculodo eh: %lf", calculo);
    return EXIT_SUCCESS;
}
