#include <stdio.h>
#include <math.h>
#include "imag.h"

struct Complex{
    float re;
    float im;
};

struct Complex ask(int b){
    struct Complex a;
    printf("Complex number #%d ", b);
    scanf("%f", &a.re);
    scanf("%f", &a.im);
    return a;
}

void display(struct Complex a){
    if(a.re >= 0)
        printf("+");
    printf("%5.3f ", a.re);
    if(a.im >= 0)
        printf("+");
    printf(" %5.3f", a.im);
    printf("i");
}

struct Complex add(struct Complex a, struct Complex b){
    a.re += b.re;
    a.im += b.im;
    return a;
}

struct Complex sub(struct Complex a, struct Complex b){
    a.re -= b.re;
    a.im -= b.im;
    return a;
}

struct Complex mul(struct Complex a, struct Complex b){
    struct Complex c;
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.re * b.im + a.im * b.re;
    return c;
}

struct Complex div(struct Complex a, struct Complex b){
    struct Complex c;
    float an = a.re, bn = a.im, cn = b.re, dn = b.im;
    c.re = (an * cn + bn * dn) / (pow(cn, 2) + pow(dn, 2));
    c.im = (bn * cn - an * dn) / (pow(cn, 2) + pow(dn, 2));
    return c;
}

void calc(struct Complex a, struct Complex b, char sinal){
    struct Complex c;
    if(sinal != '='){
        printf("( ");
        display(a);  
        printf(" )");               
        printf(" %c ", sinal);
        printf("( ");
        display(b);
        printf(" )");
        printf(" = ");
        switch(sinal){
            case '+':
                c = add(a, b);
                display(c);
                break;
            case '-':
                c = sub(a, b);
                display(c);
                break;
            case '*':
                c = mul(a, b);
                display(c);
                break;
            case '/':
                c = div(a, b);
                display(c);
                break;
        }
        printf("\n\n");
    }
}