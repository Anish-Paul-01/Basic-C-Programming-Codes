#include<stdio.h>

// Write a program using Recursion to calculate nth element of fibonacci Series

// Formula-->> Fn = (Fn-1 + Fn-2)

int fibonacci(int n);

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter The Value Of n : \n");
    scanf("%d",&a);
    printf("The %dth element of fibonacci series is \n%d" , a , fibonacci(a));
    return 0;
}

int fibonacci(int n){
    if( n == 0 )
    {
        return 0;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
        else
    {
        return fibonacci(n-1) + fibonacci(n-2) ;
    }
}