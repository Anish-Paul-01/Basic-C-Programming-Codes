#include <stdio.h>

int factorial(int x);

int main(int argc, char const *argv[])
{
    int a=6;
    printf(" The value Of factorial %d is %d",a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling factorial (%d) \n",x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}