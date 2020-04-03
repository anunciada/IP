#include <stdio.h>

int main(void){
        int max, min, med, cont, test;
        min=0;
		max=0;
        med=0;
        cont=0;
        test=0;
        
        printf("X?");
        scanf("%d", &test);
        
        while(test){
                if(cont == 0){
                        max = test;
                        min = test;
                }
            
                if(test > max){
                        max = test;
                }
                if(test < min){
                        min = test;
                }
                        
                med += test;
                cont++;

                scanf("%d", &test);
        }
        
        med /= cont;
        
        printf("O valor máximo é: %d\n", max);
        printf("O valor mínimo é: %d\n", min);
        printf("O valor médio é: %d\n", med);
        printf("Existem %d entradas\n", cont);
        return 0;
}
