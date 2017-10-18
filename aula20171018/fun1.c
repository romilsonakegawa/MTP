#include <stdio.h>
#include <stdlib.h>
int somafracao(int num1, int den1, int num2, int den2, int *pnumr, int *pdenr){
    if(den1 == 0 || den2 == 0)
        return 0;
    else{
        *pnumr = den2*num1 + den1*num2;
        *pdenr = den1*den2;
        return 1;
    }
}
int main(){
    int num1, den1,num2, den2, numr, denr;
    printf("Entre vom um numero racional na forma num/den:");
    scanf("%d/%d", &num1, &den1);
    printf("Entre vom um numero racional na forma num/den:");
    scanf("%d/%d", &num2, &den2);
    if(somafracao(num1, den1, num2, den2, &numr, &denr))
       printf("resultado da soma = %d/%d", numr, denr);
    else{
        printf("Erro!\n");
    }
    return EXIT_SUCCESS;
}
