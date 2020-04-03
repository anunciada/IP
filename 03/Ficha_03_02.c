#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
// initialize the pseudorandom number generator
//   (seed = number of seconds since January 1, 1970)
srandom((unsigned int)time(NULL));
// choose a secret number
//   random() % 100 gives a pseudo random number >= 0 and <= 99
//   adding one to it gives the desired range; >= 1 and <= 100
int secret = 1 + (int)(random() % 100);
    // vvv place your code here vvv
        int test, cont = 1;
        
        printf("X?");
        scanf("%d", &test);
        
        while(test != secret){
                if( test > secret)
                        printf("O valor secreto é inferior\n");
                else
                        printf("O valor secreto é superior\n");
                
                printf("X?");
                scanf("%d", &test);  
                cont++; 
        }
        printf("Acertou depois de %d tentativas\n", cont);
    // ^^^ place your code here ^^^
    return 0;
}
