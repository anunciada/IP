#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dimficheiro(char nome[32]);
double *lerficheiro(char nome[32], int i);
double media(double *a, int dim);
double stdarr(double *a, int dim, double med);
void pgarr(double *a, int dim, int med);

int main(void){
    char fl[32];
    printf("Nome do ficheiro: ");
    scanf("%s", fl);

    int i = dimficheiro(fl);
    double *arr = lerficheiro(fl, i);

    double medarr = media(arr, i);
    double std = stdarr(arr, i, medarr);

    printf("A dimensão é : %d\n", i);
	printf("A média é : %lf\n", medarr);
	printf("O desvio padrão é : %lf\n", std);
	printf("A lista de valores acima da média : \n");
    pgarr(arr, i, medarr);

    free(arr);
    arr = NULL;

    return 0;
}

int dimficheiro(char nome[32]){
    int i = 0;
    char ch;

    FILE *p = fopen(nome, "r");
    if(p != NULL) { 
        do{
            ch = getc(p);
            i++;
        }while(ch != EOF);
    }
    i /= 2;
    fclose(p);
    return i;
}

double *lerficheiro(char nome[32], int i){
    double *arr;
    arr = malloc(sizeof(double) * i);

    FILE *fp = fopen(nome, "r");
    if(fp != NULL) { 
        for(int z = 0; z < i; z++){
            fscanf(fp, "%lf", arr + z);
        }
    }
    fclose(fp); 

    return arr;
}

double media(double *a, int dim){
	int x = 0;
	for(int i = 0; i < dim; i++){
		x += *(a + i);
	}
	return (double)x / dim;
}

double stdarr(double *a, int dim, double med){
	double meddp = 0, b[dim];
	for(int i = 0; i < dim; i++){
		b[i] = pow(*(a + i) - med, 2);
		meddp += b[i];
	}
	meddp /= dim;
	meddp = sqrt(meddp);
	return meddp;
}

void pgarr(double *a, int dim, int med){
	for(int i = 0; i < dim; i++){
		if(*(a + i) > med)
			printf("media < %lf\n", a[i]);
	}
}