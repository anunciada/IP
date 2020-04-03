#include <stdio.h>

int opt1(int *a){
    int cont = 0;
    int temp;

    printf("Enter a value different of 0, and no more then 50 elements\n");
    printf("\nIndex | Value\n");
    do{
        printf("%5d | ", cont);
        scanf("%d", &temp);
        if(temp != 0)
            a[cont] = temp;
        cont++;
    }while(temp != 0 && cont < 50);
    --cont;
    printf("\n---Read complete---\n\n");

    return cont;
}

void opt2(int *a, int cont){
    printf("\nIndex | Value\n");
    for(int i = 0; i < cont; i++)
        printf("%5d | %d \n", i , a[i]);
    printf("\n---Print complete---\n\n");
}

void opt3(int *a, int cont){
    int max = - __INT_MAX__ - 1;
    for(int i = 0; i < cont; i++){
        if(max < a[i])
            max = a[i];
    }
    printf("\nThe maximum value is %d\n\n", max);
}

void opt4(int *a, int cont){
    int min = __INT_MAX__;
    for(int i = 0; i < cont; i++){
        if(min > a[i])
            min = a[i];
    }
    printf("\nThe minimum value is %d\n\n", min);
}

void opt5(int *a, int cont){
    double mean = 0;
    for(int i = 0; i < cont; i++){
        mean += a[i];
    }
    mean /= (double)cont;
    printf("\nThe mean value is %lf\n\n", mean);
}

void opt6(int *a, int cont){
    int par = 1;
    for(int i = 0; i < cont; i++){
        if((a[i] % 2) != 0)
            par = 0;
    }
    if(par == 1)
        printf("\nThe array include only even number\n\n");
    else
        printf("\nThe array include at least one odd number\n\n");
}


int main(void){
    int escolha, a[50], cont;

    do{
        printf("Analysis of a sequence of integers\n");
        printf("1 – Read a sequence\n");
        printf("2 – Write a sequence\n");
        printf("3 – Calculate the maximum value\n");
        printf("4 - Calculate the minimum value\n");
        printf("5 - Calculate the mean value\n");
        printf("6 – Test is the sequence includes only even numbers\n");
        printf("10 – End the program\n");
        printf("Choice ->");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                cont = opt1(a);
                break;
            case 2:
                opt2(a, cont);
                break;
            case 3:
                opt3(a, cont);
            break;
            case 4:
                opt4(a, cont);
            break;
            case 5: 
                opt5(a, cont);
            break;
            case 6:
                opt6(a, cont);
            break;
        }
    }while(escolha != 10);
    return 0;
}