#include <stdio.h>

int main(void)
{
	//Inicialização e declaração de variáveis
	float best1, best2, best3, p;
	float final;
  
	float const tw = 0.5;
	float const b1w = 0.4;
	float const b2w = 0.35;
	float const b3w = 0.25;
	float const pw = 0.5;
	
	//Receção de dados
	printf("Introduza o valor do 1º teste: ");
	scanf("%f",&best1);
	printf("Introduza o valor do 2º teste: ");
	scanf("%f",&best2);
	printf("Introduza o valor do 3º teste: ");
	scanf("%f",&best3);
	printf("Introduza o valor do teste prático: ");
	scanf("%f",&p);
	
	//Cálculo da média
    final = tw * (b1w * best1 + b2w * best2 + b3w * best3) + pw * p;

    //Print do resultado
    printf("Nota final: %4.1f\n", final);

  return 0;
}
