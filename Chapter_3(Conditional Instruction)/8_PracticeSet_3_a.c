#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;

    // '=' is assign operator & '==' is comparison operator

    if (a = 11)
    {
        printf("I am 11 \n");
    }
    else
    {
        printf("I am not 11 \n");
    }
    return 0;
}
 