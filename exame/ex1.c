#include <stdio.h>

int main(void){
    char a, aant, arr[1000];
    int i = 0, lmin = 0, rep = 0, vow = 0, cont = 0, dimarr, arrnum[1000];

    printf("Insira um caractere (# para terminar):\n");
    do{
        scanf(" %c", &a);
        arr[i] = a;
        i++;
    }while((int)a != 35);

    i--;                                                            //Nao conta o #

    do{
        if((int)arr[cont] >= 97 && (int)arr[cont] <= 122)
            lmin++;
        if(arr[cont] == arr[cont - 1])
            rep++;
        if((int)arr[cont] =='a' || (int)arr[cont] =='A' || (int)arr[cont] =='e' || (int)arr[cont] =='E' || (int)arr[cont] =='i' || (int)arr[cont] =='I' || (int)arr[cont] =='o' || (int)arr[cont] =='O' || (int)arr[cont] =='u' || (int)arr[cont] =='U')
            vow++;
        if((int)arr[cont] >= 48 && (int)arr[cont] <= 57){
            arrnum[dimarr] = arr[cont];                             //dimarr - numeros de algarismos
            dimarr++;
        }
        cont++;                                                     //contador do ciclo
    }while(cont < i && (int)arr[cont - 1] != 35);

    printf("A quantidade de letras minúsculas é: %d.\n", lmin);
    printf("A quantidade de repetições de caracteres é: %d.\n", rep);
    printf("A quantidade de vogais inseridas é: %d.\n", vow);
    printf("Os primeiros algarismos inseridos foram: ");
    for(int z = 0; z < dimarr && z < 7; z++)
        printf("%c", arrnum[z]);
    printf(".\n");

    return 0;
}