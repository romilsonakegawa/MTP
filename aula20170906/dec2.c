#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
    srand(time(0));
    int div, soma, mult, cont=0;
    int x = rand()%100;
    int menor=1328, maior=1360;
    int y = menor + rand()%(maior-menor+1);
    printf("Entre 0 e 99:%d\n",x);
    printf("Entre 101 e 293:%d\n",y);
    printf("Entre com um dos divisores de 8192: ");
    scanf("%d", & div);
    if (8192 % div == 0){
        cont++;
    }
    printf("Entre com a soma de %d e 101: ", y);
    scanf("%d", & soma);
    if(soma == y + 101){
        cont++;
    }
    printf("Entre com a multiplicacao de %d e 3: ", x);
    scanf("%d", & mult);
    if(mult == x * 3){
        cont++;
    }
    printf("%d pontos",cont);
    return 0;
}
