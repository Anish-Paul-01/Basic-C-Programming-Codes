#include <stdio.h>
#include <string.h>

// Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal.

int main(int argc, char const *argv[])
{
    char s1[40];
    char s2[40];
    char c;
    int i = 0;
    printf("Enter the value of first string \n");
    scanf("%s", &s1);
    printf("Enter the value of second string character by character \n");

    while (c != '\n')
    {
        fflush(stdin); // to clear the output buffer and move the buffered data to console or disk
        scanf("%c", &c);
        s2[i] = c;
        i++;
    }
    s2[i - 1] = '\0';

    printf("The Value of s1 is %s\n", s1);
    printf("The Value of s2 is %s\n", s2);
    printf("strcmp for these strings returns %d", strcmp(s1, s2));

    return 0;
}
