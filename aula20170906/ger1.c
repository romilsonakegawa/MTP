#include <stdio.h>
int main (){
    int numero, i;
    printf("Entre com numero: ");
    scanf("%d", & numero); getchar();
    for(i = 2; i< numero; i++){
        if(numero%i == 0)
            break;
    }
    if(i == numero)
        printf("primo!!\n");
    else
        printf("nao e primo!!\n");
    return 0;
}
