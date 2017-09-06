#include <stdio.h>
int main (){
    int numero;
    printf("Entre com numero: ");
    scanf("%d", & numero);
    if(numero%2){ //impar
        printf("Numero impar.\n");
        if(numero%5 == 0) printf("Numero multiplo de 5.\n");
    }
    else{ //par
        printf("Numero par.\n");
         if(numero%3 == 0) printf("Numero multiplo de 3.\n");
         if(numero%7 == 0) printf("Numero multiplo de 7.\n");
    }
    return 0;
}
