// Create an array dynamically capable of storing 5 integers.Now use realloc so that it can now store 10 integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;
    ptr = (int *)malloc(5 * sizeof(int));

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