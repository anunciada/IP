#include <stdio.h>

int main(void)
{
	float cel, fahr;
	printf("Introduza a temperatura em Celsius: ");
	scanf("%f",&cel);
	fahr = 1.8 * cel + 32;
	printf("%.1f ºC = %.1f ºF\n",cel,fahr);
	/*No "printf" para floats usasse o %2.4f, 2 digitos à esquerda,
	4 à direita e é do tipo float*/
	
  return 0;
}
