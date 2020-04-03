#include <stdio.h>
#include <string.h>

void invstr(char *a, int dim){
    for(dim; dim >= 0; dim--)
        printf("%c", a[dim]);
    printf("\n");
}

int main(void){
    char arr[32];
    int dim = 0;

    printf("Introduza texto: ");
    fgets(arr, sizeof(arr), stdin);

    invstr(arr, strlen(arr));

    return 0;
}
