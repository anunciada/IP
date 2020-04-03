#include <stdio.h>

void countdown(int N){
    for(int i = N; i >= 0; i--)
        printf(" %d \n", i);
}

int main(void){
    int n;

    printf("Insira um número:");
    scanf("%d", &n);

    countdown(n);
    
    return 0;
}