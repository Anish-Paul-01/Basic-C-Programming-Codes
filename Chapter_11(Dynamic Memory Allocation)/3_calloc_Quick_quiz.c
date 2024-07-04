// Write a program to create an array of size n using Calloc where nis an integer entered by the user.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("How many integers do you want to enter: \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of %dth element: \n", (i + 1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }
return 0;
}