#include <stdio.h>
#include <string.h>

int abr(char *a, char *b, int dim){
    int o = 0;
    for(int i = 0; i < dim; i++){
        if((int)a[i] <= 90 && (int)a[i] >= 65 && o < 3){
            b[o] = a[i];
            o++;
        }
    }
    return o;
}

int main(void){
    char arr[128];
    char clube[3];

    printf("Introduza o nome do clube : ");
    fgets(arr, sizeof(arr), stdin);

    int o = abr(arr, clube, strlen(arr));
    
    for(int i = 0; i < o; i++)
        printf("%c", clube[i]);
    printf("\n");
    
    return 0;
}