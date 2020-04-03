#include <stdio.h>

int main(void){
    int num;

    printf("How many grades do you want to input? ");
    scanf("%d", &num);

    int a[num -1];
    int b[20];

    for(int i = 0; i < 20; i++)
        b[i] = 0;

    for(int i = 0; i < num; i++){
        printf("%dº grade: ", (i + 1));
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < num; i++){
		b[a[i]]++;
	}

    printf("Grades histogram\n");
    printf("---------------------------------------------------------\n");
    for(int i = 20; i >= 0; i--){
        printf("%2d | ", i);
        for(int j = 0; j < b[i]; j++)
        printf("*");
        printf("\n");
    }
    return 0;
}