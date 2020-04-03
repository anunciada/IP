#include <stdio.h>

int gcd(int a, int b){
    int t;
    while(b != 0){
       t = b; 
       b = a % b; 
       a = t;
    } 
    return a;
}

int main(void){
    int a, b;

    printf("Introduza dois valores para achar o maior divisor comum:\n");
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);

    printf("O mdc é %d\n", gcd(a, b));
}