#include <stdio.h>

int main()
{
    int m, i, n = 5;

    m = 0;

    for(i = 1; i <= 12; i++){

        m = m + n;

        printf("%d X %d = %d\n", n, i, m);
    }

    return 0;
}
