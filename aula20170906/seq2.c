#include <stdio.h>
int main (){
    float basedotriangulo, alturadotriangulo, areadotriangulo;
    printf("Entre com a base do triangulo: ");
    scanf("%f", & basedotriangulo);
    printf("Entre com a altura do triangulo: ");
    scanf("%f", & alturadotriangulo);
    areadotriangulo = (basedotriangulo*alturadotriangulo)/2;
    printf("Area do triangulo : %.3f\n",areadotriangulo);
    return 0;
}
