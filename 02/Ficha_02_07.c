#include <stdio.h>

int main(void){
	int ano, mes, bi;
	
	bi = 0;
	
	printf("Insira o mês: ");
	scanf("%d", &mes);
	printf("Insira o ano: ");
	scanf("%d", &ano);
	
	if(( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )
			bi = 1;
	
	switch(mes){
			case 1:
					printf("Tem 31 dias!\n");
					break;
			case 2:
					if(bi)
							printf("Tem 29 dias!\n");
					else 
							printf("Tem 28 dias!\n");
					break;
			case 3:
					printf("Tem 31 dias!\n");
					break;
			case 5:
					printf("Tem 31 dias!\n");
					break;
			case 7:
					printf("Tem 31 dias!\n");
					break;
			case 8:
					printf("Tem 31 dias!\n");
					break;
			case 10:
					printf("Tem 31 dias!\n");
					break;
			case 12:
					printf("Tem 31 dias!\n");
					break;
			default:
					printf("Tem 30 dias!\n");
					break;
	}
	
	return 0;
}
