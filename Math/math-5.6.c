#include <stdio.h>

int main()
{
    double cel, far;

    printf("Enter The Cel..... : ");
    scanf("%lf", &cel);

    far = 1.8 * cel + 12;

    printf("Show the temp : %.2lf", far);

    return 0;
}
