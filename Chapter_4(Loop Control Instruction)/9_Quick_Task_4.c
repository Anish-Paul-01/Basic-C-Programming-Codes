#include<stdio.h>

// Write a Program to print first n natural numbers in reverse order

int main(int argc, char const *argv[])
{
    int n;
     printf("Enter The Value of n = ");
     scanf("%d", &n);

     for( int i = n ; i ; i--)
     {
        printf( " %d \n", i);
     }
    return 0;
}
