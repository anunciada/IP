#include <stdio.h>

int main(void)
{
	//Inicialização e declaração de variáveis
	float best1, best2, best3, p;
	float final;
	float tw, b1w, b2w, b3w, pw;
	
	//Receção de dados--pesos
	printf("Introduza o peso dos testes teóricos(%%): ");
	scanf("%f",&tw);
	tw = tw / 100;
	printf("Introduza o peso do 1º teste(%%): ");
	scanf("%f",&b1w);
	b1w = b1w / 100;
	printf("Introduza o peso do 2º teste(%%): ");
	scanf("%f",&b3w);
	b3w = b3w / 100;
	printf("Introduza o peso do teste prático(%%): ");
	scanf("%f",&pw);
	pw = pw / 100;
	
	//Receção de dados--notas
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
