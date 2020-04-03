#include <stdio.h>

int dim(void){
    int num;
    printf("How many grades do you want to input? ");
    scanf("%d", &num);
    return num;
}

void ler(int *a, int dim){
    for(int i = 0; i < dim; i++){
        printf("%dº grade: ", (i + 1));
        scanf("%d", &a[i]);
    }
}

void write(int *b){
    printf("Grades histogram\n");
    printf("---------------------------------------------------------\n");
    for(int i = 20; i >= 0; i--){
        printf("%2d | ", i);
        for(int j = 0; j < b[i]; j++)
            printf("*");
        printf("\n");
    }
}

int main(void){
    int num = dim();

    int a[num -1];
    int b[20];

    for(int i = 0; i <= 20; i++)
        b[i] = 0;

    ler(a, num);

    for(int i = 0; i < num; i++){
		b[a[i]]++;
	}

    write(b);

    return 0;
}