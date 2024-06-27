#include <stdio.h>

// Call By Reference

void Wrong_swap(int a, int b);

void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int a = 2, b = 9;
    printf("The Value Of a and b before swap is %d and %d \n", a, b);
    // Wrong_swap(a, b); // will not work due to call by Value
    swap(&a, &b); // will work due to call By Reference
    printf("The Value Of a and b after swap is %d and %d \n", a, b);
    return 0;
}
void Wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Repeat Call By Reference 