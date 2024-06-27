#include <stdio.h>

// Write a program to decryptthe string encrypted using encrypt functin in problem 6

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main(int argc, char const *argv[])
{
    char string[100];
    printf("Enter Anything : ");
    gets(string);
    decrypt(string);
    printf("Decrypted string is : %s", string);
    return 0;
}
