#include <stdio.h>

struct time{
    int h;
    int m;
    int s;
};

struct student{
    int num;
    char name[128];
};

void display(struct time a);
struct time ask(char str[10]);
struct student studentinfo(void);

int main(void){
    struct student aluno;
    struct time entrada, saida, total;

    aluno = studentinfo();
    entrada = ask("entry");
    saida = ask("leave");

    if(entrada.h > saida. h)
        printf("Impossible");
    else if(entrada.h == saida. h && entrada.m > saida.m)
        printf("Impossible");
    else if(entrada.h == saida. h && entrada.m == saida.m && entrada.s > saida.s)
        printf("Impossible");
    else{
        total.h = saida.h - entrada.h;
        total.m = saida.m - entrada.m;
        total.s = saida.s - entrada.s;
    }

    printf("The student was %d h %d m %d s in DET\n", total.h, total.m, total.s);
    return 0;
}

void display(struct time a){
    printf("%2d", a.h);
    printf(":");
    printf("%2d", a.m);
    printf(":");
    printf("%2d", a.s);
}

struct time ask(char str[10]){
    struct time a;
    char s[8];
    int flag = 1;

    do{
        printf("Enter a valid hour (HH:MM:SS) to %s: ", str);
        scanf("%s", s);
        a.h = (s[0] - 48) * 10 + (s[1] - 48);
        a.m = (s[3] - 48) * 10 + (s[4] - 48);
        a.s = (s[6] - 48) * 10 + (s[7] - 48);

        if(a.h < 0 || a.h > 23)
            flag = 0;
        if(a.m < 0 || a.m > 59)
            flag = 0;   
        if(a.s < 0 || a.s > 59)
            flag = 0;
    }while(flag == 0);
    return a;
}

struct student studentinfo(void){
    struct student a;
    printf("Student name: ");
    fgets(a.name, 128, stdin);
    printf("Student number: ");
    scanf("%d", &a.num);
    return a;
}