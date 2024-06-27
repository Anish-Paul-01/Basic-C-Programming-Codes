#include <stdio.h>

// Write a program to count the occurance of a given character in a string

int occurance(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char String[] = "Anishpaul";
    int count = occurance(String, 'p');
    printf("Occurance = %d", count);
    return 0;
}
