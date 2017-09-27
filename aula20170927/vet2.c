#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(){
    int vet[N];
    int i, j , aux=0 ;
    for(i = 0; i <N ; i++){
        printf("Entre com o %d a numero : ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i = 0, j = 9; i < N/2 ; i++, j--){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }
    for(i = 0; i <N ; i++){
            printf("%d ", vet[i]);
    }
    return EXIT_SUCCESS;
}
