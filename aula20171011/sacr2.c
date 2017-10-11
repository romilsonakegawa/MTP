#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    char c;
    printf("Simulador de dado vs. 1.0 - Digite ENTER para rodar o dado\n");
            int i, t, d, soma;
            for(t=0; t<3; t++){
                soma=0;
                for(i=0; i<5; i++){
                    scanf("%c", &c);
                    d = dado();
	                printf("... %d\n", d);
	                soma += d;
                }
                if(soma == 18 || soma == 19 ||soma == 20 ||soma == 21 ||soma == 22 ||soma == 23 ){
                    printf("soma: %d\n", soma);
                    printf("\n\nVoce ganhou!\n");
                    break;
                }
               printf("soma: %d\n", soma);
            }
    if(t==3)
    printf("\n\nVoce perdeu!");
    return EXIT_SUCCESS;
}
