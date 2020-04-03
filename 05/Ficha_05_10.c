#include <stdio.h>

int soma(int a, int b){
    int soma = 0;

    for(a; a <= b; a++)
        soma += a;
    
    return soma;
}

int main(void){
    int a, b;

    do{
    printf("Introduza dois valores\n");
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    }while(a > b);

    printf("Resultado: %d\n", soma(a, b));
}