#include <stdio.h>

// Write A program to create an array of 10 integers and store multiplication table of 5 in it.na

int main(int argc, char const *argv[])
{
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d =  %d \n", i + 1, mul[i]);
    }

    return 0;
}
