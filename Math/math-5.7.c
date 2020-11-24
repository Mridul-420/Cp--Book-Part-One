#include <stdio.h>

int main()
{
    int a, b, x, gcb;
    scanf("%d %d", &a, &b);

    if(a < b){
        x = a;
    }
    else{
        x = b;
    }
    for(; x >= 1; x--){
        if(a % x == 0 && b % x == 0){
        gcb = x;
        break;
        }
    }
    printf("GCD is %d\n",gcb);

    return 0;
}
