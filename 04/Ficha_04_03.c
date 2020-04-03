#include <stdio.h>

int main(void){
	int a[100], b[__INT16_MAX__], cont = 0, ind = 0, temp;
	
	for(int i = 0; i < 100; i++)
		a[i] = -1;

	for(int i = 0; i < __INT16_MAX__; i++)
		b[i] = -1;
	
	printf("Insira um número inteiro\n");
	
	do{
		printf("X = ");
		scanf("%d", &temp);
		if(temp >= 0)
			a[cont] = temp;
		cont++;
	}
	while(cont < 100 && temp >= 0);

	for(int i = 0; i < 100; i++){
		if(a[i] == -1)
			break;
		b[a[i]]++;
	}
	
	for(int i = 0; i < __INT16_MAX__; i++){
		if(b[i] >= 0)
			printf("O número %d aparece %d vezes\n", i, (b[i] + 1));
	}
	return 0;
}
