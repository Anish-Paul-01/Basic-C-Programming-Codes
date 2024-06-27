#include<stdio.h>
#include<string.h>

// Write a Program with a Structure Representing a Complex Number

typedef struct ComplexNumber{
    float real;
    float img;
}ComplexNo;

int main(int argc, char const *argv[])
{
    ComplexNo dim;
    dim.real = 95;
    dim.img = 39;
    
printf("THe Value of real-axis of the Complex Number = %.1f \n", dim.real);
printf("THe Value of imaginary-axis of the Complex Number = %.1f \n", dim.img);
printf("The Complex No. is = %d + i %d",(int)dim.real,(int)dim.img);
    return 0;
}
