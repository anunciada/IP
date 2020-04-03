#include <stdio.h>
#include <math.h>

int dimarr(void){
	int i;
	do{
		printf("Introduza um número entre 1 e 10 : ");
		scanf("%d", &i);
	}while(i > 10 && i < 0);
	return i;
}

void lerarr(int *arr, int dim){
	for(int i = 0; i < dim; i++){
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

double avgarr(int *a, int dim){
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

int main(void){
	int dim;
	double med, std;

	dim = dimarr();

	int arr[dim];

	lerarr(arr, dim);

	med = avgarr(arr, dim);
	std = stdarr(arr, dim, med);

	printf("A dimensão é : %d\n", dim);
	printf("A média é : %lf\n", med);
	printf("O desvio padrão é : %lf\n", std);
	printf("A lista de valores acima da média : \n");
	pgarr(arr, dim, med);

	return 0;
}