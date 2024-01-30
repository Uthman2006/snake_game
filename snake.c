#include "snake.h"
void snake(int **data,char *c,int *a, int *b){
    system("clear");
    if(*c=='w'&&*(a)>0){
        (*a)--;
        data[*a][*b]=3;
    }
    else if(*c=='d'&&*b<NMAXX-1){
        (*b)++;
        data[*a][*b]=3;
    }
    else if(*c=='s'&&*a<NMAXY-1){
        (*a)++;
        data[*a][*b]=3;
    }
    else if(*c=='a'&&*b>0){
        (*b)--;
        data[*a][*b]=3;
    }
    else if (*a<4||*b<4||*b>NMAXX-5||*a>NMAXY-5){
        *a=12;
        *b=40;
        data[*a][*b]=3;
    }
}