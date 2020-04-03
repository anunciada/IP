#include <stdio.h>

int main(void){
		int N;
		
		printf("Insira o número de inteiros da lista: ");
		scanf("%d", &N);
		
		int arr[N];
		
		if(N > 0 && N < 11){
				for(int i = 1; i <= N; i++){
						printf("Insira o %dº número: ", i);
						scanf("%d", &arr[i-1]);
				}
				for(int i = N; i >= 1; i--){
						printf("O %dº número é %d\n", i, arr[i-1]);
				}
		}
		else
				printf("Insira um valor entre 1 e 10\n");
		return 0;
}
