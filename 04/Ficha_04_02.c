#include <stdio.h>
#include <math.h>

int main(void){
		int N;
		double med = 0, meddp = 0;
		
		printf("Insira o número de inteiros da lista: ");
		scanf("%d", &N);
		
		int arr[N];
		int dp[N];
		
		if(N > 0 && N < 11){
				for(int i = 1; i <= N; i++){
						printf("Insira o %dº número: ", i);
						scanf("%d", &arr[i-1]);
				}
				
				for(int i = 0; i < N; i++){
						med += arr[i];
				}
				
				med /= N;
				
				for(int i = 0; i < N; i++){
						dp[i] = pow(arr[i] - med, 2);
						meddp += dp[i];
 				}
 				meddp /= N;
 				meddp = sqrt(meddp);
 				
 				printf("A média é %lf\n", med);
 				printf("O desvio padrão é %lf\n", meddp);
		}
		else
				printf("Insira um valor entre 1 e 10\n");
		return 0;
}
