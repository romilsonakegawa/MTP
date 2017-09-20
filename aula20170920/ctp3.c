#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 256
int main(){
    char frase[N];
    int i, j=0;
    printf("Entre com uma frase:\n");
    fgets(frase,N,stdin);
    for (i = 0; frase[i]; i++)
        if (isalpha(frase[i]))
         j++;
    printf("%i", j);
    return EXIT_SUCCESS;
}

