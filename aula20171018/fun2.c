#include <stdio.h>
#include <stdlib.h>
int quocienteEresto(int num, int den, int *res, int *quo){
    if(den == 0 )
        return 0;
    else{
        *res = num % den;
        *quo = num/den;
        return 1;
    }

}
int main(){
    int num, den, res, quo;
    printf("Entre com 2 numeros inteiros:");
    scanf("%d %d", &num, &den);
    if(quocienteEresto(num, den, &res, &quo))
   printf("Quociente: %d, resto: %d", quo, res);
     else{
        printf("Erro!\n");
    }
    return EXIT_SUCCESS;

}

