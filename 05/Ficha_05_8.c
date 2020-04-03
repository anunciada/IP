#include <stdio.h>
#include <math.h>

int dec2bin(int n){
    int a[(int)floor((log10(n) / log10(2))) + 1], cont = 0, num = 0;

    for(int i = 0; i <= sizeof(a) / sizeof(int); i++)
        a[i] = 0;

    do{
        a[cont] = n % 2;
        n = floor(n / 2);
        cont++; 
    }while(n >= 1);

    for(cont; cont >= 0; cont--){
        num += a[cont] * pow(10, cont);
    }

    return num;
}

int main(void){
    int x;

    do{
        printf("Insira um valor positivo: ");
        scanf("%d", &x);
    }while(x <= 0);

    printf("A representação binária é: %d\n", dec2bin(x));
    return 0;
}