#include <stdio.h>

int main(void){
	int a,b;
	
	printf("Introduza dois números: \n");
	scanf("%d %d",&a ,&b);
	if(a == b){
		printf("O dois números são iguais\n");
	}
	else{
		if(a < b){
			printf("O número %d é o maior\n", b);
		}
		else{
			printf("O número %d é o maior\n", a);
		}
	}
	return 0;
}
