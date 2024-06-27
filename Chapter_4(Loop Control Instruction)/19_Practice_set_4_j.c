#include <stdio.h>

// Write a progarm to Check whether a given number is prime or not using loops

// Disclaimer : This is Not the best method to Solve this problem

int main(int argc, char const *argv[])
{
    int n, prime = 0;

    printf("Enter The Number(You want to check): ");

    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1 || n <= 1)
    {
        printf("This is not a Prime Number");
    }
    else
    {
        printf("This is a  Prime Number");
    }
    return 0;
}
