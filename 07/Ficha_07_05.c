#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isvowel(int x){                                     //Verify if is vowel
    if((int)x <= 90 && (int)x >= 65)
            x += 32;
    if(x == 97 || x == 101 || x == 105 || x == 111 || x == 117)
        return 1;
    else
        return 0;
}

int isconso(int x){                                     //Verify if is consoant
    if((int)x <= 90 && (int)x >= 65)
            x += 32;
    if(x != 97 && x != 101 && x != 105 && x != 111 && x != 117 && x >= 97 && x <= 122)
        return 1;
    else
        return 0;
}

int main(void){
    char str[128];
    int strlc = 0, struc = 0, strnc = 0, strc = 0, strw = 0;

    printf("Write a sentence : ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; i < strlen(str); i++){
        islower(str[i]) ? strlc++ : strlc;                      //Estrutura alternativa ao if
        isupper(str[i]) ? struc++ : struc;
        isdigit(str[i]) ? strnc++ : strnc;
        isvowel(str[i]) ? strw++ : strw;
        isconso(str[i]) ? strc++ : strc;
    }

    printf("Phrase analysis:\n");
    printf(" phrase -> ");
    for(int i = 0; i < strlen(str); i++)
        printf("%c", str[i]);
    printf(" number of lowercase characters -> %d\n", strlc);
    printf(" number of uppercase characters -> %d\n", struc);
    printf(" number of numeric characters -> %d\n", strnc);
    printf(" number of vowels -> %d\n", strw);
    printf(" number of consonants -> %d\n", strc);
    return 0;
}