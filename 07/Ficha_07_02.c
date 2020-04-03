#include <stdio.h>
#include <string.h>

void decstr(char *a, int dim){
    for(int i = 0; i < dim; i++){
        if((int)a[i] <= 90 && (int)a[i] >= 65)
            a[i] += 32;
    }
}

int main(void){
    char arr[128];

    printf("Introduza uma string: ");
    fgets(arr, sizeof(arr), stdin);

    decstr(arr, strlen(arr));

    for(int i = 0; i < strlen(arr); i++)
        printf("%c", arr[i]);

    return 0;
}