#include <stdio.h>

int main()
{
    int a, b, sum;

    scanf("%d %d",&a, &b);
    //scanf("%d",&b);

    sum = a + b;

    printf("Sum is %d \n", sum);
    printf("%d + %d = %d \n", b, a, sum);

    return 0;
}
