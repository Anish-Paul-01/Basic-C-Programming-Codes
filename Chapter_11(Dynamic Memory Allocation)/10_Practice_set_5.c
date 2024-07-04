// Create an array of multiplication table of 7 upto 10(7X10=70).Use realloc to make it store 15 numbers(from 7x1 to 7X15).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i = 0;
    ptr = (int *)malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7 X %d = %d\n", (i + 1), ptr[i]);
    }
    printf("\n\n");
    ptr = realloc(ptr,15*sizeof(int));
     for (i = 0; i < 15; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7 X %d = %d\n", (i + 1), ptr[i]);
    }
    return 0;
}