#include <stdio.h>

// Pointers 1

int main(int argc, char const *argv[])
{
    int i = 21;
    int *j = &i; // j will now store the address of i

    printf("The Value Of i is %d \n", i);
    printf("The Value Of i is %d \n", *j);
    printf("The Value Of i is %d \n", *(&i));
    printf("The Value Of j is %d \n", *(&j));
    printf("The Address Of i is %u \n", &i);
    printf("The Address Of i is %u \n", j);
    printf("The Address Of j is %u \n", &j);
    

    return 0;
}