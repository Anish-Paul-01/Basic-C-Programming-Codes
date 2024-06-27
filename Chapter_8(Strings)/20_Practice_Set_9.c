#include <stdio.h>

// Write a program to check whether a given character is present in a string or not.

int present(char *st, char c)
{
    char *ptr = st;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            return 1;
        }
        ptr++;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char string[] = "AnishPaul";
    int a = present(string, 'o');
    if (a == 1)
    {
        printf("Yes, This Character is present in the string \n");
    }
    else
    {
        printf("No, This Character is not present in the string \n");
    }

    return 0;
}
