#include<stdio.h>
#include<string.h>

// Create an array of 5 complex numbers created in Problem 5 and display function.The Values must be taken as an input from the user.

typedef struct ComplexNumber{
    float real;
    float img;
}ComplexNo;

void Display( ComplexNo cnums[4],int a){
  printf("The rael axis value of %d th complex no. = %.1f \n", a+1 , cnums[a].real );    
  printf("The imaginary axis value of %d th complex no. = %.1f \n ", a+1 , cnums[a].img );   
  printf("The Complex No. =  %.1f + i %.1f \n ", cnums[a].real ,cnums[a].img );   

}

int main(int argc, char const *argv[])
{

 int p;   
ComplexNo dim[4];

for (int i = 0; i < 5; i++)
{
    printf("Enter the Value of Real Axis of Complex No.(%d)= \n",i+1);
    scanf("%f", &dim[i].real);
    printf("Enter the Value of Imaginary Axis of Complex No.(%d)= \n", i+1);
    scanf("%f", &dim[i].img);
}

printf("Enter any Value (Less Than Equal to 5) = ");
scanf("%d", &p);
Display(dim ,p-1);

    return 0;
}
