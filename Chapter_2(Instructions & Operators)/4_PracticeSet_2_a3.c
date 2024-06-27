#include<stdio.h>

// Write a Program to Determine whether a number is Divisible By 97 Or Not 

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter the a Number \n:");
    scanf ("%d", &num);

    printf("Divisibility Test Returns %d \n ", num%97);


// Explain Step by Step Claculation Of 3*x/y-z+k , Where x=2,y=3,z=3,k=1
/** (3*x/y-z+k)= (3*2/3-3+1) = (6/3-3+1) = (2-3+1) = -1+1 =0 **/



int  x=2,y=3,z=3,k=1;
int clac=3*x/y-z+k;
printf( "The Value of 3*x/y-z+k = %d \n" , clac );


float h = 3.0+1 ;
printf ("The Value of x is %f", h);



    return 0;
}
