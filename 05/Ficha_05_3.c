#include <stdio.h>
#include <math.h>

double p(double a, double b, double c, double x){
    return pow(x, 2) * a + b * x + c;
}

int main(void){
    double a, b, c;
    
    printf("Insert a, b and c\n");
    printf("a=");
    scanf("%lf", &a);
    printf("b=");
    scanf("%lf", &b);
    printf("c=");
    scanf("%lf", &c);

    printf(" X | P(X)\n");
    for(double x = 0; x < 2.1; x += 0.1){
        printf("%3.1lf| %.2lf\n", x, p(a, b, c, x));
    }
    return 0;
}