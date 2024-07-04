#include <stdio.h>
#include <string.h>

// Create an array of 5 complex numbers created in Problem 5 and display function.The Values must be taken as an input from the user.

typedef struct ComplexNumber
{
    float real;
    float img;
} ComplexNo;

void Display(ComplexNo cnums)
{
    printf("The rael axis value of complex no. = %.1f \n", cnums.real);
    printf("The imaginary axis value of complex no. = %.1f \n ", cnums.img);
    printf("The Complex No. =  %.1f + i %.1f \n ", cnums.real, cnums.img);
}

int main(int argc, char const *argv[])
{

    ComplexNo dim[4];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Value of Real Axis of Complex No.(%d)= \n", i + 1);
        scanf("%f", &dim[i].real);
        printf("Enter the Value of Imaginary Axis of Complex No.(%d)= \n", i + 1);
        scanf("%f", &dim[i].img);
    }

    for (int i = 0; i < 5; i++)
    {
        Display(dim[i]);
    }

    return 0;
}
