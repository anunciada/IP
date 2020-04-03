#include <stdio.h>
#include <math.h>

int valid(void){
		int N;
		printf("Insira o número de inteiros da lista: ");
		scanf("%d", &N);
		return N;
}

int ler(int N){
		int arr[N];
		for(int i = 1; i <= N; i++){
						printf("Insira o %dº número: ", i);
						scanf("%d", &arr[i-1]);
				}
		return arr;
}

int media(int N, int arr[N]){
		double med;
		for(int i = 0; i < N; i++){
				med += arr[i];
		}		
		med /= N;
		return med;
}

int std(int arr[], N, med){
		double dp[N], meddp;
		for(int i = 0; i < N; i++){
				dp[i] = pow(arr[i] - med, 2);
				meddp += dp[i];
		}
		meddp /= N;
		meddp = sqrt(meddp);
		return meddp;
}

int main(void){
		int N;
		double med = 0, meddp = 0;
		
		N = valid(); 
		
		int arr[N];
		int dp[N];
		
		if(N > 0 && N < 11){
				arr = ler(N);
				
				med = media(N, arr);
				
 				meddp = std(arr[], N, med);
 				
 				printf("A média é %lf\n", med);
 				printf("O desvio padrão é %lf\n", meddp);
		}
		else
				printf("Insira um valor entre 1 e 10\n");
		return 0;
}