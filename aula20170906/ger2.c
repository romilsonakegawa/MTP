#include <stdio.h>
int main (){
    int numero, i, soma;
    printf("Entre com numero: ");
    scanf("%d", & numero); getchar();
    soma = 0;
    for(i = 1; i< numero - 1; i++){
        if(numero%i == 0){
            soma = soma + i;
        }
    }
    if (soma == numero){
        printf("Eh perfeito");
    }
    else {
        printf("Nao eh perfeito\n");
    }
    return 0;
}

