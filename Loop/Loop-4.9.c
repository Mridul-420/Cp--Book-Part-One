#include <stdio.h>

int main()
{
    int i,j;
    for(i = 1; i <= 20; i++){
        for(j = 1; j <= 12; j++){
            printf("%d X %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}
