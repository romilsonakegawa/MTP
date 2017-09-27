#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(){
    int vet[N];
    int i, soma=0, produto=1 ;
    for(i = 0; i <N ; i++){
        printf("Entre com o %d a numero : ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i <N ; i++){
            soma = soma + vet[i];
            produto = produto * vet[i];
    }
    printf("A soma dos nemeros eh: %i \n", soma);
    printf("O produto dos nemeros eh: %d", produto);
    return EXIT_SUCCESS;
}
