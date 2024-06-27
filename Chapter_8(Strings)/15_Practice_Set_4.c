#include <stdio.h>

// Write a fuction slice() to slice a string. It Should change the original string such that it is now the sliced string. Take m and n as the Start and ending position for slice

void slice(char *str, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        str[i] = str[i + m];
        i++;
    }

    str[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char st[] = "Anishpaul";
    slice(st, 2, 6);
    printf("%s", st);
    return 0;
}
