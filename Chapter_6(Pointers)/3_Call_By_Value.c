#include <stdio.h>
#include <math.h>

// Call By Value

int sum(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 2, b = 9;
    printf("The Value Of a and b is %d and %d \n", a, b);
    printf("The Value of (2+9) is %d\n", sum(a, b));
    printf("The Value Of a and b after function call is  is %d and %d \n", a, b);
    return 0;
}

int sum(int a, int b)
{
    int Summation;
    Summation = a + b;
    return Summation;
}