#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr1;
    ptr = (int *)malloc(600 * sizeof(int));
    // We can use this as an array.
    for (int i = 0; i < 6000; i++)
    {
        ptr1 = (int *)malloc(9999999 * sizeof(int));
        printf("Enter the Value of %dth element: \n", (i + 1));
        scanf("%d", &ptr[i]);
        free(ptr1);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }
    return 0;
}