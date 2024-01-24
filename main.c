#include <stdio.h>
#include <stdlib.h>
#define NMAXX 80
#define NMAXY 25
void snake(int **data);
void table(int **data);
int main(){
    int **data = malloc(NMAXY*sizeof(int*));
    for(int i = 0; i<NMAXY;++i){
        *(data+i)=malloc(NMAXX*sizeof(int));
    }
    table(data);
    return 0;
}
void table(int **data){
    while(1){
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
        snake(data);
        for(int i = 0; i<NMAXY;++i){
            for(int j =0; j<NMAXX;++j){
                printf("%d",data[i][j]);
            }
            printf("\n");
        }
    }
}
void snake(int **data){
    data[12][40]=3;
    data[11][40]=1;
}
