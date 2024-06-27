#include <stdio.h>

// Write a program using functions to print the following pattern ( First n lines)
// *
// * * *
// * * * * *

void PrintPattern(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter The Value Of n : \n");
    scanf("%d", &n);
    PrintPattern(n);
    return 0;
}

// 1 -> 1
// 2 -> 3
// 3 -> 5
// (2n-1)

void PrintPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }

    PrintPattern(n - 1);
    
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}