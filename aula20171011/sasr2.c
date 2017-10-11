#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void impar(){
        int e;
        for(e=1; e<21; e++){
            if(e%2 == 1)
                printf("%d, ", e);
        }
}
void par(){
        int p;
        for(p=1; p<21; p++){
            if(p%2 == 0)
                printf("%d, ", p);
        }
}
int main(){
    int n;
    printf("Digite 1 para impartes de 1 a 20 ou digite 2 para pares de 1 a 20:");
    scanf("%d", &n);
    switch(n) {
        case 1: impar(); break;
        case 2: par(); break;
    }
    return EXIT_SUCCESS;
}
