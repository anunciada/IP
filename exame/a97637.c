#include <stdio.h>
#include <math.h>
#include <limits.h>

int ePrimo(int a);

int main(void){
    int i, a, b = INT_MAX, sum = 0, conta = 0, contb = 0, contc = 0, contd = 0,conte = 0;
    double med;

    printf("Insira um numero positivo: ");
    scanf("%d", &i);

    printf("Insira uma lista de numeros (< 0 para terminar)\n");

    do{
        scanf("%d", &a);
        if(a >= 0){
            sum += a;                       //Média
            conta++;
            if(a > b)                       //Números superiores ao anterior
                contb++;
            b = a;
            if(a % i == 0)                  //Múltiplos de i
                contc++;
            if(a > i)                       //Números superiores a i
                contd++;
            if(ePrimo(a))                   //Primos
                conte++;
        }
    }while(a >= 0);

    med = (double)sum / conta;

    printf("A média dos números introduzidos é %.2lf.\n", med);
    printf("A quantidade de multiplos de %d é %d.\n", i, contc);
    printf("A quantidade de números superiores a %d é %d.\n",i , contd);
    printf("A quantidade de números primos é %d.\n",conte);
    printf("A quantidade de números superiores ao anterior é %d.\n",contb);

    return 0;
}

int ePrimo(int teste){
    for(int i = 2; i < sqrt(teste) + 1; i++){
        if(teste % i == 0)
            return 0;                               //Não é primo
    }
    return 1;                                       //É primo
}