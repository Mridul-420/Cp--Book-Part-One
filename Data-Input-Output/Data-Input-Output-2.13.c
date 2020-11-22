#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter The First Number : ");
    scanf("%d", &num1);
    printf("Enter The Second Number : ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d X %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);

    return 0;
}
