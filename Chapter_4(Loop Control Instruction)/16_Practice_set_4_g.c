#include<stdio.h>

// Write a Program to calculate the Sum of the numbers occuering in the multiplication of 8

int main(int argc, char const *argv[])
{
    int i = 8;
    int a=1 ;
    int sum;

    while(a<=10)
    {
        sum = sum + (8*a);
        a++;
    } 
    printf (" The sum of the numbers occuring in hr multiplication of 8 = %d ", sum);

    return 0;
}
