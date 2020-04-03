#include <stdio.h>
static int numdia(int ano, int mes);

int main(void){
	int ano, mes, dia; //data inserida
	int nd; //Número de dias
	int anoa, mesa, diaa; //Dia anterior
	int anos, mess, dias; //Dia seguinte
	int erro = 0;
	
	printf("Insira o ano: ");
	scanf("%d", &ano);
	
	do
	{
			printf("Insira o mês: ");
			scanf("%d", &mes);
			
			if(mes < 0 || mes > 12){
					printf("Introduza uma data possível\n");
					erro = 1;
			}
			else
			{
					erro = 0;
			}
	}
	while(erro);
	
	nd = numdia(ano,mes);
	
	do
	{
			printf("Insira o dia: ");
			scanf("%d", &dia);
			
			if(dia < 0 || dia > nd){
					printf("Introduza uma data possível\n");
					erro = 1;
			}
			else
					erro = 0;
	}
	while(erro);
	
	if(dia == 1 && dia != nd){ //Cálculo do dia anterior
			if(mes == 1){
					mesa = 12;
					anoa = ano-1;
			}
			else{
					mesa = mes-1;
					anoa = ano;
			}
			diaa = numdia(anoa, mesa);
	}
	else{
			diaa = dia-1;
			mesa = mes;
			anoa = ano;
	}
	
	if(dia == nd){ //Cálculo do dia seguinte
			dias = 1;
			if(mes == 12){
					mess = 1;
					anos = ano+1;
			}
			else{
					mess = mes+1;
					anos = ano; 
			}
	}
	else{
			dias = dia+1;
			mess = mes;
			anos = ano;
	}
	
	printf("----------------------------------\n");
	printf("Dia atual: %d/%d/%d \n",dia, mes, ano);
	printf("Dia anterior: %d/%d/%d \n",diaa, mesa, anoa);
	printf("Dia seguinte: %d/%d/%d \n",dias, mess, anos);
	return 0;
}

int numdia(int ano, int mes){
	
	int bi, nd; //Bissexto, número de dias
	bi = 0;
	
	if(( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 ) //Verifica se é bissexto
			bi = 1;
	
	switch(mes){ //Calculas o número de dias daquele mês
			case 1:
					nd = 31;
					break;
			case 2:
					if(bi)
							nd = 29;
					else 
							nd = 28;
					break;
			case 3:
					nd = 31;
					break;
			case 5:
					nd = 31;
					break;
			case 7:
					nd = 31;
					break;
			case 8:
					nd = 31;
					break;
			case 10:
					nd = 31;
					break;
			case 12:
					nd = 31;
					break;
			default:
					nd = 31;
					break;
	}
	return nd;
}
