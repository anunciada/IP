#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dimensao(void);
void ler(int *arr, int dim);
double media(int *a, int dim);
double stdarr(int *a, int dim, double med);
void pgarr(int *a, int dim, int med);

int main(void){
    int i = dimensao();
    int *p;
    double medarr, std;

    p = malloc(i * sizeof(int));
    ler(p, i);
    medarr = media(p, i);
    std = stdarr(p, i, medarr);

    printf("A dimensão é : %d\n", i);
	printf("A média é : %lf\n", medarr);
	printf("O desvio padrão é : %lf\n", std);
	printf("A lista de valores acima da média : \n");
    pgarr(p, i, medarr);

    free(p);
    p = NULL;
    return 0;
}

int dimensao(void){
	int i;
	do{
		printf("Introduza um número positivo: ");
		scanf("%d", &i);
	}while(i < 0);
	return i;
}

void ler(int *arr, int dim){
	for(int i = 0; i < dim; i++){
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

double media(int *a, int dim){
	int x = 0;
	for(int i = 0; i < dim; i++){
		x += a[i];
	}
	return (double)x / dim;
}

double stdarr(int *a, int dim, double med){
	double meddp = 0, b[dim];
	for(int i = 0; i < dim; i++){
		b[i] = pow(a[i] - med, 2);
		meddp += b[i];
	}
	meddp /= dim;
	meddp = sqrt(meddp);
	return meddp;
}

void pgarr(int *a, int dim, int med){
	for(int i = 0; i < dim; i++){
		if(a[i] > med)
			printf("media < %d\n", a[i]);
	}
}