#include <stdio.h>
#include <math.h>
#include "imag.h"

struct Complex{
    float re;
    float im;
};

struct Complex ask(int b);
void display(struct Complex a);
struct Complex add(struct Complex a, struct Complex b);
struct Complex sub(struct Complex a, struct Complex b);
struct Complex mul(struct Complex a, struct Complex b);
struct Complex div(struct Complex a, struct Complex b);
void calc(struct Complex a, struct Complex b, char sinal);

int main(void){
    struct Complex a, b;
    char sinal;
    a = ask(1);
    b = ask(2);

    printf("\n");

    do{
        printf("Operation: ");
        scanf(" %c", &sinal);
        calc(a, b, sinal);
    }while(sinal != '=');

    printf("Illegal operation. Good bye!\n");

    return 0;
}