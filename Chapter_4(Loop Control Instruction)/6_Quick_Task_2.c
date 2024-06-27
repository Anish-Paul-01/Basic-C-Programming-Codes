#include <stdio.h>

// Write A Program to print first n natural numbers using Do-While loop

int main(int argc, char const *argv[])
{
    int n;
    int i = 1;

    printf("Enter The value of n = ");
    scanf("%d", &n);

    do
    {
        printf("First %d natural Numbers are = %d \n ", n, i);
        i++;
    } while (i <= n);

    return 0;
}
