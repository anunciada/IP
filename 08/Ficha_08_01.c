#include <stdio.h>
#include <math.h>

struct coord{
    float x;
    float y;
};

struct coord ler(struct coord c, char h){
    printf("Introduza as coordenadas do ponto %c\n", h);
    printf("x = ");
    scanf("%f", &c.x);
    printf("y = ");
    scanf("%f", &c.y);
    return c;
}

void display(struct coord c, char h){
    printf("Coordenadas do ponto %c\n", h);
    printf("x = %6.3f\n", c.x);
    printf("y = %6.3f\n", c.y);
}

float distance(struct coord c1, struct coord c2){                       //Distância euclideana
    float a;
    a = sqrt(pow(c2.x - c1.x, 2) + pow(c2.y - c1.y, 2));
    return a;
}

int main(void){
    struct coord c[100];
    struct coord origin;
    float dist;
    int i = 0;
    int maior = 0;
    origin.x = 0;
    origin.y = 0;

    do{
        c[i] = ler(c[i], 'A' + i);
        i++;
    }while(c[i -1].x != 0 || c[i -1].y != 0);

    i--;

    printf("\n--------------------------------------------------------------\n\n");

    for(int a = 0; a < i; a++)
        display(c[a], 'A' + a);

    for(int a = 0; a < i; a++){
        dist += distance(origin, c[a]);
        (distance(origin, c[a]) > maior) ? maior = a : maior;
    }

    printf("A soma da distância dos %d pontos é %.3f\n", i, dist);
    printf("O ponto mais distante é de coordenadas (%.3f,%.3f)\n", c[maior].x, c[maior].y);

    return 0;
}