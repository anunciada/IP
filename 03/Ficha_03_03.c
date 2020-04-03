#include <stdio.h>
#include <math.h>

int main(void){
        int test, trt, div1, div2, isp = 1; //Teste, raiz quadrada de teste, 2 variáveies de teste, é primo?
        
        printf("Introduza uma variável ");
        scanf("%d", &test);
        
        trt = round(sqrt(test));
        
        for(int i = 2; i <= trt; i++)
        {
                div1 = test / i;
                div2 = test % i;
                
                if(div2 == 0){
                        isp = 0;
                        break;
                }
        }
        
        if(isp)
                printf("É primo\n");
        else
                printf("Não é primo\n");
        
        return 0;
}
