#include <stdio.h>
#include <math.h>

double aproxPi(int tent){
    double pi = 0;

    for(int i = 0; i < tent; i++){
        pi += (pow(-1, i)) / (2 * i + 1);
    }

    return pi * 4;
}

int main(void){
    double piaprox;
    int n;

    printf("Introduza um número para calcular o pi : ");
    scanf("%d", &n);

    piaprox = aproxPi(n);

    printf("O valor de pi aproximado é %lf\n", piaprox);
    return 0;
}