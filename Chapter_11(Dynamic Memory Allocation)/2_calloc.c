#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));

    // Default value of memory block is 0

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }

    return 0;
}