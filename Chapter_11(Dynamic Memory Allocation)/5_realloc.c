#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    // We can use this as an array.
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the Value of %dth element: \n", (i + 1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }

    // Reallocate ptr using realloc()

ptr = realloc(ptr,12*sizeof(int));
    for (int i = 0; i < 12; i++)
    {
        printf("Enter the Value of %dth element: \n", (i + 1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }
    return 0;
}