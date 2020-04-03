#include <stdio.h>
#include <stdlib.h>

void convert(unsigned char *rgb, unsigned char *gray, int dim);
void creategray(char name[40], unsigned char *gray, int altura, int largura, int profundidade);

int main(void){
    char str[3];
    int altura, largura, profundidade;

    FILE *fp = fopen("airplane.ppm", "r");                                  //Lê o cabeçalho do file
    if( fp != NULL ) { 
        fscanf(fp, "%s %d %d %d", str, &altura, &largura, &profundidade);
    }
    printf("%s\n%d %d\n%d\n", str, altura, largura, profundidade);          //Imprime o cabeçalho

    int dim = sizeof(unsigned char) * altura * largura;

    unsigned char *rgb = malloc(dim * 3);                                   //Alocação de memória
    unsigned char *gray = malloc(dim);

    fread(rgb, sizeof(unsigned char), 3 * altura * largura, fp);            //Leitura e carregamento da imagem para memória

    fclose(fp);

    convert(rgb, gray, dim);                                                //Converte de RGB para Gray scale
    creategray("out.pgm", gray, altura, largura, profundidade);             //Cria o ficheiro para a imagem em Gray scale

    return 0;
}

void convert(unsigned char *rgb, unsigned char *gray, int dim){
    for(int p = 0; p < dim *3; p += 3){
        unsigned char r, g, b, y;
        r = rgb[p];
        g = rgb[p + 1];
        b = rgb[p + 2];
        y = 0.299 * r + 0.587 * g + 0.114 * b;
        gray[p / 3] = y;
    }
}

void creategray(char name[40], unsigned char *gray, int altura, int largura, int profundidade){
    FILE *fpout = fopen(name, "w");
    fprintf(fpout, "%s\n %d %d\n %d\n", "P5", altura, largura, profundidade);
    fwrite(gray, 1, largura * altura, fpout);
    fclose(fpout);
}