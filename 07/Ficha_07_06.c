#include <stdio.h>
#include <ctype.h>

int matchPattern(char *str, char *pattern){
    int i = 0;
    for(int i = 0; i <= 7; i++){
        if(isdigit(str[i]) == isdigit(pattern[i]))
            continue;
        else if(isalpha(str[i]) == isalpha(pattern[i]))
            continue;
        else if((int)str[i] == (int)pattern[i])
            continue;
        else 
            return 0;
    }
    printf("\n N1 \n");
    return 1;
}

int main(void){
    char str[8];
    char pt1[8] = "AA-00-00";
    char pt2[8] = "00-AA-00";
    char pt3[8] = "00-00-AA";

    printf("Introduza uma matricula : ");
    fgets(str, sizeof(str), stdin);

    if(matchPattern(str, pt1))
        printf("É matrícula portuguesa\n");
    else if(matchPattern(str, pt2))
        printf("É matrícula portuguesa\n");
    else if(matchPattern(str, pt3))
        printf("É matrícula portuguesa\n");
    else
        printf("Não é matrícula portuguesa\n");
    
    return 0;
}