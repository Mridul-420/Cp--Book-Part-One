#include <stdio.h>

int main()
{
    int ara1[] = {3,1,5,2,4};
    int ara2[5];
    int i, minium, index_2, minium_index;

    for(index_2 = 0; index_2 < 5; index_2++){
        minium = 10000;
        for(i = 0; i < 5; i++){
            if( ara1[i] < minium){
                minium = ara1[i];
                minium_index = 1;
            }
        }
        ara1[minium_index] = 10000;
        ara2[index_2] = minium;
    }
    for(i = 0; i < 5; i++){
        printf("%d\n", ara2[i]);
    }
    return 0;
}

