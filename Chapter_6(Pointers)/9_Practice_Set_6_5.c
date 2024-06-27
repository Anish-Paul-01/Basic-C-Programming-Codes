#include <stdio.h>

// Write a Program to print the value of a variable i by using "Pointer to Pointer" type of variable

int main(int argc, char const *argv[])
{
    int i = 433;
    int *j;
    int **k;

    j = &i;
    k = &j;
    printf("The Value of the variable i is %d", **k);
    return 0;
}
