#include <stdio.h>

// Create a string using " " and print its content using a loop

int main(int argc, char const *argv[])
{
    // char str[] = "Anish";
    char str[] = {'A','N','I','S','H','\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
