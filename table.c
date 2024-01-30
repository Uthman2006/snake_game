#include "table.h"
void table(int **data){
    int a = 12, b = 40;
    char c;
    while(1){
        c=getchar();
        if(c=='\n'){
            continue;
        }
        else{
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
            snake(data,&c,&a,&b);
            for(int i = 0; i<NMAXY;++i){
                    for(int j =0; j<NMAXX;++j){
                        data[i][j]=data[i][j];
                    }
            }
            for(int i = 0; i<NMAXY;++i){
                    for(int j =0; j<NMAXX;++j){
                        printf("%d",data[i][j]);
                    }
                    printf("\n");
            }
        }
    }
}