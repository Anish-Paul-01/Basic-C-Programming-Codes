#include <stdio.h>

//  Write a Program to print the address of a Variable. Use this Address to get the Value of this variable.

int main(int argc, char const *argv[])
{
    int i = 4;
    int *j;
    j = &i;
    printf(" The address of variable 'i' is = %u \n ", &i);
    printf("The value of the Variable is = %d \n ", *j);
    printf("The value of the Variable is = %d \n ", *(&i));
    return 0;
}
