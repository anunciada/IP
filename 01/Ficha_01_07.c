#include <stdio.h>
#include <math.h>

int main(void)
{
	float x1,x2,y1,y2,d;
	
	printf("Cordenadas do ponto 1(x y): ");
	scanf("%f %f",&x1,&y1);
	printf("Cordenadas do ponto 2(x y): ");
	scanf("%f %f",&x2,&y2);
	
	d=sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	
	printf("A distância entre os pontos 1 e 2 é: %f \n", d);
	return 0; 
	//Na compilação, por no final -lm
}
