#include <stdio.h>

int main(void){
    int escolha, a[50], temp, cont = 0, max = - __INT_MAX__ - 1, min = __INT_MAX__, par = 1;
    double mean = 0;

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
                par = 1;
                cont = 0;
                max = - __INT_MAX__ - 1;
                min = __INT_MAX__;
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
                break;
            case 2:
                printf("\nIndex | Value\n");
                for(int i = 0; i < cont; i++)
                    printf("%5d | %d \n", i , a[i]);
                printf("\n---Print complete---\n\n");
                break;
            case 3:
                for(int i = 0; i < cont; i++){
                    if(max < a[i])
                        max = a[i];
                }
                printf("\nThe maximum value is %d\n\n", max);
            break;
            case 4:
                for(int i = 0; i < cont; i++){
                    if(min > a[i])
                        min = a[i];
                }
                printf("\nThe minimum value is %d\n\n", min);
            break;
            case 5: 
                for(int i; i < cont; i++)
                    mean += a[i];
                mean /= cont;
                printf("\nThe mean value is %lf\n\n", mean);
            break;
            case 6:
                for(int i = 0; i < cont; i++){
                    if((a[i] % 2) != 0)
                        par = 0;
                }
                if(par == 1)
                    printf("\nThe array include only even number\n\n");
                else
                    printf("\nThe array include at least one odd number\n\n");
            break;
        }
    }while(escolha != 10);
    return 0;
}