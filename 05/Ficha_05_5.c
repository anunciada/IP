#include <stdio.h>

int max(int val1, int val2, int val3){
    if(val1 < val2 && val3 < val2)
        return val2;
    else if(val3 < val1)
        return val1;
    else 
        return val3;
}

int main(void){
    int x1, x2, x3;

    printf("Insira dois valores : \n");
    printf("Valor 1 = ");
    scanf("%d", &x1);
    printf("Valor 2 = ");
    scanf("%d", &x2);
    printf("Valor 3 = ");
    scanf("%d", &x3);

    printf("O maior valor é %d\n", max(x1, x2, x3));
    return 0;
}