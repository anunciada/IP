#include <stdio.h>
#include <string.h>
#include <math.h>

int valid(char *a, int dim){
    for(int i = 0; i < (dim / 2); i++){
        if((int)a[i] <= 90 && (int)a[i] >= 65)
            a[i] += 32;
        if(a[i] != a[dim - 1 - i])
            return 0;
    }
    return 1;
}

int main(void){
    char str[32];

    printf("Introduza uma palavra : ");
    fgets(str, sizeof(str), stdin);

    if(valid(str, strlen(str) - 1))
        printf("É um palíndromo\n");
    else 
        printf("Não é palíndromo\n");

    return 0;
}