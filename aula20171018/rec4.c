#include <stdio.h>
#include <math.h>
int fun1(int a[], int n, int b[], int m){
    int i, j, r;
    for(i = 0; i<n; i++){
        for(j=0; j<m; j++){
            r = sqrt(a[i]*b[j]);
            printf("%d ", r);
        }
    }
    return 0;
}
int fun2(int a[], int n, int b[], int m){
    int i, j;
    double r;
    for(i = 0; i<n; i++){
        for(j=0; j<m; j++){
            r = a + 3*b;
            printf("%d ", r);
        }
    }
    return 0;
}
int fun3(int a[], int n, int b[], int m){
    int i, j, r;
    for(i = 0; i<n; i++){
        for(j=0; j<m; j++){
            r = (b*b)/a;
            printf("%d ", r);
        }
    }
    return 0;
}
void map(double * vec, int tam, double (*fun)(double)) {
if(tam > 0) {
*vec = fun(*vec);
map(vec+1,tam-1,fun);
}
}
double reduce(double * vec, int tam) {
if(tam > 0)
return *vec + reduce(vec+1, tam-1);
else
return 0.0;
}
double f2x1 (double x) {
return 2.0*x + 1.0;
}
int main() {
    int i, valor;
double A[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
double B[] = {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
int n = sizeof(A)/sizeof(double);
map(A,n,f2x1);
for(i = 0; i < n; i++)
printf("%lg%s", A[i], (i==n-1)? "\n" : "; ");
map(B,n,f2x1);
for(i = 0; i < n; i++)
printf("%lg%s", B[i], (i==n-1)? "\n" : "; ");

  printf("Digite um valor de 1 a 3: ");
  scanf("%d", &valor);

  switch ( valor )
  {
     case 1 :
       fun1(A, n, B, n);
     break;

     case 2 :
       fun2(A, n, B, n);
     break;

    case 3 :
       fun3(A, n, B, n);
     break;

     default :
       printf ("Valor invalido!\n");
  }

  getch();
  return 0;
  return EXIT_SUCCESS;
}



