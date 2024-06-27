#include <stdio.h>

// Write a Recursive function to calculate the sum of first n natural numbers

int sum(int a);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter The Value Of n : \n");
    scanf("%d", &n);
    printf("The Sum of First %dth natural Number is = %d", n, sum(n));
    return 0;
}

int sum(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a + sum(a - 1);
    }
}
