#include <stdio.h>

int max(int val1, int val2){
    if(val1 < val2)
        return val2;
    else 
        return val1;
}

int main(void){
    int x1, x2;

    printf("Insira dois valores : \n");
    printf("Valor 1 = ");
    scanf("%d", &x1);
    printf("Valor 2 = ");
    scanf("%d", &x2);

    printf("O maior valor é %d\n", max(x1, x2));
    return 0;
}