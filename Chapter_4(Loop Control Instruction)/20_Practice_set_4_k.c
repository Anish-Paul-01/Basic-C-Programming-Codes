#include <stdio.h>

// Implement previous Questions using other types of Loops

int main(int argc, char const *argv[])
{
    int n, prime = 1;
    int x = 2;

    printf("Enter The Number(You want to check): ");

    scanf("%d", &n);

    while (x < n)
    {
        if (n % x == 0)
        {
            prime = 0;
            break;
        }
        x++;
    }

    if (prime == 0 || n <= 1)
    {
        printf("This is not a Prime Number");
    }
    else
    {
        printf("This is a  Prime Number");
    }

    return 0;
}
