#include <stdio.h>

int main(void){
	const float preco = 1.40;
	float litros, pagar;
	
	printf("Introduza a quantidade de combustível em litros: ");
	scanf("%f", &litros);
	
	if(litros > 40){
		pagar = preco * 0.9 * litros;
		printf("Tem 10%% de desconto. %.2f litos %.2f euros\n", litros, pagar);
	}
	else{
				pagar = preco * litros;
		printf(" %.2f litos %.2f euros\n", litros, pagar);
	}
	return 0;
}
