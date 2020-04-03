#include <stdio.h>
#include <math.h>

double p(double x){
    return pow(x, 2) + 2 * x + 3;
}

int main(void){
    printf(" X | P(X)\n");
    for(double x = 0; x < 2.1; x += 0.1){
        printf("%3.1lf| %.2lf\n", x, p(x));
    }
    return 0;
}