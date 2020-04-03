#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	double c, angle, cs;
	
	printf("Tamanho da cateto A: ");
	scanf("%d", &a);
	printf("Tamanho da cateto B: ");
	scanf("%d", &b);
	
	c = sqrt(pow(a , 2) + pow(b , 2));
	cs = a / c;
	angle = acos(cs);
	angle *= 180.0 / M_PI;
	
	printf("Tamanho do hipotenusa: %.2lf\n", c);
	printf("Ângulo entre o lado A e a hipotenusa: %.1lfº\n", angle);
	return 0;
}
