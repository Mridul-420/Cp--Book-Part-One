#include <stdio.h>

int main()
{
    int a, b, t, x, gcb;

    scanf("%d %d", &a, &b);

    if(a == 0)
        gcb = a;
    else if(b == 0)
        gcb = b;
    else{
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        gcb = a;
    }
    printf("GCD is %d\n", gcb);
    return 0;
}
