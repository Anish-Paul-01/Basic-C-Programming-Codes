#include <stdio.h>

// Write a program to encrypt a string by adding 1 to the ascii value of its characters.

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main(int argc, char const *argv[])
{
    char string[100];
    printf("Enter Anything : ");
    gets(string);
    encrypt(string);
    printf("Encrypted string is : %s", string);

    return 0;
}
