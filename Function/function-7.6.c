#include <stdio.h>

int main()
{
    int ara[] = {100,0,53,33,83,23,89,13,220,13,85};
    int n = 11;

    int max = find_max(ara, n);

    printf("%d\n",max);

    return 0;
}
int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;

    for(i = 0; i < n; i++){
        if(ara[i] > max){
            max = ara[i];
        }
    }
    return max;
}
