#include <stdio.h>
#include <math.h>

int main(void){
    int n, soma = 0;

    printf("Insira um número entre 1 e 1000: \n");
    scanf("%d", &n);

    int a[2*n];

    for(int i = 0; i < 2*n ; i++){
        if((i % 2) == 0)
            a[i] = i;
        else 
           a[i] = - i; 
        soma = a[i];
    }

    for(int i = 0; i < 2*n ; i++)
        printf("a[%d] = %d \n", i, a[i]);

    printf("A soma de todos os elementos é %d\n", soma);
}