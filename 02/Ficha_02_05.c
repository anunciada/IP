#include <stdio.h>

int main(void){
	int a;
	
	printf("Introduza um número: \n");
	scanf("%d",&a);
	
	if(a % 2){
		printf("É ímpar\n");
	}
	else{
		printf("É par\n");
	}
	return 0;
}
