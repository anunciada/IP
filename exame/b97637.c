#include <stdio.h>

void fibonacci(int *str, int dim);
void calcMod(int *str, int *mod, int var, int dim);
void display(int *mod, int dim, int test);

int main(void){
    int n, m;

    printf("N = ");
    scanf("%d", &n);
    printf("M = ");
    scanf("%d", &m);

    int fib[n]; 
    fibonacci(fib, n);
    int mod[n];
    calcMod(fib, mod, m, n);

    for(int i = 0; i <= n; i++){
        if(mod[i] == 0)
           printf("F(%d) mod 7 is zero\n", i);
    }

    display(mod, n, 0);
    display(mod, n, 1);
    display(mod, n, 2);
    display(mod, n, 3);
    display(mod, n, 4);
    display(mod, n, 5);
    display(mod, n, 6);

    return 0;
}

void fibonacci(int *fib, int n){
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;

    for(int i = 3; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}

void calcMod(int *fib, int *mod, int m, int n){
    for(int i = 0; i <= n; i++)
        mod[i] = fib[i] % m;
}

void display(int *mod, int n, int test){
    int cont = 0;
    for(int i = 0; i <= n; i++){
        if(mod[i] == test)
            cont++;
    }
    printf("F(k) mod 7 = %d appeared %d times\n", test, cont);
}