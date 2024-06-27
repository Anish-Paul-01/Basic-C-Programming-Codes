#include<stdio.h>

// Write a program to change the value of a variable to ten times of its current Value. Write a function and pass the value by reference.

void TenTimesValue(int *x){
    printf("The Value of a(Ten Times) is %d \n", 10*(*x));
}

// We can Write Function in this way also

int main(int argc, char const *argv[])
{
    int a = 5;
    printf("The value of a is %d \n", a);
    TenTimesValue(&a);

    return 0;
}
