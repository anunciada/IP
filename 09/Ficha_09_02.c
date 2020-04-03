#include <stdio.h>              //Por acabar

struct time{
    int h;
    int m;
    int s;
};

struct student{
    int num;
    char name[128];
    struct time entrance;      
    struct time exit; 
    struct time tmspent;            //Time spent          
};

void display(struct time a);
struct time askTime(char arr[]);
int askInfo(struct student *lista, int pos);

int main(void){
    

    return 0;
}

void display(struct time a){
    printf("%2d", a.h);
    printf(":");
    printf("%2d", a.m);
    printf(":");
    printf("%2d", a.s);
}

struct time askTime(char str[10]){
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

int askInfo(struct student *lista, int pos){
    struct student aluno;
    struct time entrada, saida, total;

    printf("Enter the student name: ");
    fgets(aluno.name, 128, stdin);
    printf("Enter the student number: ");
    scanf("%d", &aluno.num);
    aluno.entrance = askTime("entry");
    aluno.exit = askTime("leave");

    if(aluno.entrance.h > aluno.exit.h){
        printf("Impossible");
        return 0;
    }
    else if(aluno.entrance.h == aluno.exit.h && aluno.entrance.m > aluno.exit.m){
        printf("Impossible");
        return 0;
    }
    else if(aluno.entrance.h == aluno.exit.h && aluno.entrance.m == aluno.exit.m && aluno.entrance.s > aluno.exit.s){
        printf("Impossible");
        return 0;
    }
    else{
        aluno.tmspent.h = saida.h - entrada.h;
        aluno.tmspent.m = saida.m - entrada.m;
        aluno.tmspent.s = saida.s - entrada.s;
    }

    append(lista, aluno);
}

void append(struct student *lista, struct student aluno){


}