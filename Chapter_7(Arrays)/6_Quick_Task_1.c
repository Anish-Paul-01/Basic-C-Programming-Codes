#include <stdio.h>

// Try these noperations on another variable by creating pointers in a separate program.
// Demonstrate all the four operations :-
// 1. Addition of a number to a pointer
// 2. Substraction of a number from a pointer
// 3. Substraction of one pointer from another
// 4. Comparison of two pointer variables

int main(int argc, char const *argv[])
{
    int a = 123;
    int *ptr1;
    ptr1 = &a;
    printf(" The address of a is %u \n ", ptr1);
    ptr1++; // ptr1 = ptr1 + 1
    printf("The address of a is %u \n ", ptr1);
    printf("\n\n");

    int b = 123;
    int *ptr2;
    ptr2 = &b;
    printf(" The address of b is %u \n ", ptr2);
    ptr2--;
    printf("The address of b is %u \n ", ptr2);
    printf("\n\n");

    int c = 111;
    int d = 241;
    int *ptr3 = &c;
    int *ptr4 = &d;
    printf(" The address of c is %u \n ", ptr3);
    printf("The address of d is %u \n ", ptr4);
    printf("THe Difference between address of c & d is %d \n", ptr3 - ptr4);
    printf("\n\n");

    int e = 212;
    int f = 123;
    int *ptr5 = &e;
    int *ptr6 = &f;
    printf("The address of e = %u \n", ptr5);
    printf("The address of f = %u \n", ptr6);
    if (ptr5 != ptr6)
    {
        printf("The address of e and f is not smae, Hence the Difference between their address is %u", ptr5 - ptr6);
    }

    return 0;
}
