#include <stdio.h>

// Repeat the Problem 7 for a custom input given by the user

void printable(int num, int n)
{
   int x;
    printf("The Multiplication Table of %d is : \n", num);
    for (int i = 0; i < n; i++)
    {
        x = num * (i + 1);
        printf("%d x %d = %d \n", num, i + 1, x);
    }

   
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter any number which multiplication table you want : \n");
    scanf("%d", &a);
    printf("How many line of table you want : \n");
    scanf("%d", &b);

    printable(a, b);

    return 0;
}
