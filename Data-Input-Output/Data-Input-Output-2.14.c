#include <stdio.h>

int main()
{
    int num1, num2, value;
    char sing;

    printf("Enter The First Number : ");
    scanf("%d", &num1);
    printf("Enter The Second Number : ");
    scanf("%d", &num2);

    value = num1 + num2;
    sing = '+';
    printf("%d %c %d = %d\n", num1, sing, num2, value);

    value = num1 - num2;
    sing = '-';
    printf("%d %c %d = %d\n", num1, sing, num2, value);

    value = num1 * num2;
    sing = '*';
    printf("%d %c %d = %d\n", num1, sing, num2, value);

    value = num1 / num2;
    sing = '/';
    printf("%d %c %d = %d\n", num1, sing, num2, value);

    return 0;
}
