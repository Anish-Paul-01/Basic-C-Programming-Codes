// Use the array in problem 1 to store 6 integers entered by the users.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i;
    ptr = (int *)malloc(6 * sizeof(int));

    for (i = 0; i < 6; i++)
    {
        printf("Enter the %dth elemnet: \n ",(i+1));
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }
    return 0;
}