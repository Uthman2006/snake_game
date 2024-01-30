#include "table.h"
int main(){
    int **data = malloc(NMAXY*sizeof(int*));
    for(int i = 0; i<NMAXY;++i){
        *(data+i)=malloc(NMAXX*sizeof(int));
    }
    table(data);
    return 0;
}

