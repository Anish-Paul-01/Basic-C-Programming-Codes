#include <stdio.h>

// Write a program to calculate the factorial of a given Number using a for loop

int main(int argc, char const *argv[])
{
    int i = 0, n, factorial = 1;

    printf(" Enter The Number \n");

    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The Value of Factoral %d is %d\n", n, factorial);

    return 0;
}
