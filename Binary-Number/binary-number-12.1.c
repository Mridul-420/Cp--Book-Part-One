#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char binary[65];
    int len, decimal, power, i;

    printf("Enter The Binary Number : ");
    scanf("%s", binary);

    decimal = 0;
    len = strlen(binary);
    power = len - 1;

    for(i = 0; i < len; i++){
        decimal += (binary[i] - '0')* pow(2, power);
        power--;
    }
    printf("Decimal Value is %d\n", decimal);

    return 0;
}
