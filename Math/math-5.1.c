#include <stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Enter X Value : ");
    scanf("%lf",&x_plus_y);
    printf("Enter Y Value : ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("X = %0.2lf\n Y = %0.2lf\n", x, y);

    return 0;
}
