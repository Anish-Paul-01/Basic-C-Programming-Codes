#include<stdio.h>

// Write a program to print multiplication table of a given number n

int main(int argc, char const *argv[])
{
    int n;
    int a=1;
    printf("Enter The Value of n = ");
    scanf("%d", &n);

    while (a<=10)
    {
        printf("%d X %d = %d \n ", n , a , n*a );
        a++;
    }
    
    return 0;
}
