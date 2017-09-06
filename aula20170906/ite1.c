#include <stdio.h>
int main (){
    int numero;
    int i, fatorial;
    printf("Entre com numero: ");
    scanf("%d", & numero); getchar();
    fatorial=1;
    for(i=0; i< numero; i++)
        fatorial = fatorial*(numero-i);
    printf("fatorial: %d\n", fatorial);
    return 0;
}
