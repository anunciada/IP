#include <stdio.h>

int main(void){
	int a,b,c;
	
	printf("Introduza três números: \n");
	scanf("%d %d %d",&a ,&b, &c);
	if(a == b && a == c){
		printf("O três números são iguais\n");
	}
	else{
		if(a > b && a > c){
			printf("O número %d é o maior\n", a);
		}
		else if(b > c){
			printf("O número %d é o maior\n", b);
		}
		else{
			printf("O número %d é o maior\n", c);
		}
	}
	return 0;
}
