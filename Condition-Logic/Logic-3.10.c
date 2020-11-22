#include <Stdio.h>

int main()
{
    char ch = 'W';

    if(ch >= 'a' && ch <= 'z'){
        printf("%c is the lowwer case \n", ch);
    }
    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is the upper case \n", ch);
    }
    /* else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is the upper case \n", ch);
    } */
    return 0;
}
