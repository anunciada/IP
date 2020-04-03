#include <stdio.h>

int main(void)
{
	float v1,v2,avg;
	
	printf("Introduza a velocidade média do primeiro estágio: ");
	scanf("%f",&v1);
	printf("Introduza a velocidade média do segundo estágio: ");
	scanf("%f",&v2);
	
	avg = (v1 + v2) / 2;
	
	printf("A velocidade média dos dois estágio é %.1f\n",avg);
	
	return 0;
}
