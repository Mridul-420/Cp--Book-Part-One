#include <stdio.h>

int main()
{
    int number, remainer;

    number = 5;

    remainer = number % 2;

    if(remainer == 0){
        printf("The number is even/jur-number.");
    }
    else{
        printf("The Number is odd/bejur-number.");
    }

    return 0;
}
