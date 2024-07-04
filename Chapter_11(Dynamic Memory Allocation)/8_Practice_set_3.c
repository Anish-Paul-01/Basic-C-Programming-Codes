//Solve problem 1 using Calloc


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i;
    ptr = (int *)calloc(6 , sizeof(int));

    ptr[0] = 2;
    ptr[1] = 5;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 21;
    ptr[5] = 26;

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %dth element is: %d\n", (i + 1), ptr[i]);
    }
    return 0;
}