#include <stdio.h>
#include <math.h>

int numdig(int n){
    int x;
    x = floor(log10(n)) + 1;
    return x;
}

int main(void){
    int n;

    do{
        printf("Insira um valor positivo: ");
        scanf("%d", &n);
    }while(n < 0);

    printf("O número %d tem %d dígitos\n", n, numdig(n));

    return 0;
}