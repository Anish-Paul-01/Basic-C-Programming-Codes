#include <stdio.h>

// Write a your own version of strlen function from <string.h>

int strlen(char *str)
{
    char *ptr = str;
    int a = 0;
    while (*ptr != '\0')
    {
        a++;
        ptr++;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    char str[]= "Tiger";
    int l = strlen(str);
    printf("The Length of The String is %d \n", l);
    return 0;
}
