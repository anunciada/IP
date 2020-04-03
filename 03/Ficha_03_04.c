#include <stdio.h>
#include <math.h>

int main(void){
		int N, soma, ind, divi;					//Número a ser testado, soma dos divisores, índice do array, teste de divisiblidade
		ind = 0;
		soma = 0;
		
		printf("Insira um número: ");
		scanf("%d", &N);
		
		int Nsr = N / 2;						//Declaração do array
		int div[Nsr];
		
		for(int i = 0; i <= Nsr; i++){			//Inicialização do array
				div[i] = 0;
		}
		
		for(int i = 1; i <= Nsr; i++)			//Cálculo dos divisores
        {
                divi = N % i;
                
                if(divi == 0){
                        div[ind] = i;
                        ind++;
                }
        }
        
        ind--;
		
		for(int i = 0; i <= Nsr; i++){			//Soma de todos os divisores
				soma += div[i];
		}
		
		if(soma == N){							//Print final "Perfeito"
				for(int i = 0; i <= ind; i++){	
						if(i == ind){
								printf(" %d =", div[i]);
								break;
						}
						else
								printf(" %d +", div[i]);
				}
				printf(" %d (o número é perfeito)\n", N);
		}
		
		if(soma < N){							//Print final "Deficiente"
				for(int i = 0; i <= ind; i++){
						if(i == ind){
								printf(" %d <", div[i]);
								break;
						}
						else
								printf(" %d +", div[i]);
				}
				printf(" %d (o número é deficiente)\n", N);
		}
		
		if(soma > N){							//Print final "Abundante"
				for(int i = 0; i <= ind; i++){
						if(i == ind){
								printf(" %d >", div[i]);
								break;
						}
						else
								printf(" %d +", div[i]);
				}
				printf(" %d (o número é abundante)\n", N);
		}
		return 0;
}
