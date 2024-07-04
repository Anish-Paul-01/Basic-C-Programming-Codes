//Attempt problem 4 using calloc.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;
    ptr = (int *)calloc(5 , sizeof(int));

    for (i = 0; i < 5; i++)
    {
        printf("Enter the %dth elemnet: \n ", (i + 1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));
    for (i = 0; i < 10; i++)
    {
        printf("Enter the %dth elemnet: \n ", (i + 1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }

    return 0;
}