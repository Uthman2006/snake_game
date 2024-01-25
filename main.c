#include <stdio.h>
#include <stdlib.h>
#define NMAXX 80
#define NMAXY 25
void proccess(int **o_data,int **n_data);
void snake(int **data,char *c,int *a, int *b);
void table(int **data);
void output(int **o_data,int **n_data);
int main(){
    int **o_data = malloc(NMAXY*sizeof(int*));
    for(int i = 0; i<NMAXY;++i){
        *(o_data+i)=malloc(NMAXX*sizeof(int));
    }
    int **n_data = malloc(NMAXY*sizeof(int*));
    for(int i = 0; i<NMAXY;++i){
        *(n_data+i)=malloc(NMAXX*sizeof(int));
    }
    proccess(o_data,n_data);
    return 0;
}
void table(int **data){
    for(int i = 0; i<NMAXY;++i){
        for(int j =0; j<NMAXX;++j){
            data[i][j]=0;
        }
    }
    for(int i = 0; i<NMAXY;++i){
        for(int j =0; j<NMAXX;++j){
            if((i==0&&j<NMAXX)||(i==NMAXY-1&&j<NMAXX)||(j==0&&i<NMAXY-1)||(j==NMAXX-1&&i<NMAXX-1)){
                data[i][j]=2;
            }
        }
    }
}
void snake(int **data,char *c,int *a, int *b){
    // system("clear");
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
    // else{
    //     data[*a][*b]=3;
    // }
}
void output(int **o_data,int **n_data){
    for(int i = 0; i<NMAXY;++i){
            for(int j =0; j<NMAXX;++j){
                n_data[i][j]=o_data[i][j];
            }
    }
    for(int i = 0; i<NMAXY;++i){
            for(int j =0; j<NMAXX;++j){
                printf("%d",n_data[i][j]);
            }
            printf("\n");
    }
}
void proccess(int **o_data,int **n_data){
    int a = 12, b = 40;
    char c;
    while(1){
        scanf("%c",&c);
        if(c!='\n'){
            output(o_data,n_data);
        }
        else{
            table(o_data);
            snake(o_data,&c,&a,&b);
            output(o_data,n_data);
        }
    }
}
