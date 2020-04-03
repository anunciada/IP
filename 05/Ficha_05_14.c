#include <stdio.h>

void Fibonacci(int *a, int dim){
    a[0] = 0;
    a[1] = 1;

    for(int i = 2; i < dim; i++)
        a[i] = a[i-1] + a[i - 2];
}

int main(void){
    int i;
    printf("Introduza o tamanho da lista de Fibonacci : ");
    scanf("%d", &i);

    int a[i];

    printf("\nA lista : \n");
    Fibonacci(a, i);

    for(int b = 0; b < i; b++){
        printf("a[%d] = %d\n", b, a[b]);
    }

    return 0;
}