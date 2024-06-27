#include <stdio.h>

// Write A program to create an array of 10 integers and store multiplication table of 5 in it.na

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter The Value of n = ");
    scanf("%d", &n);

    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d =  %d \n", n, i + 1, mul[i]);
    }

    return 0;
}
