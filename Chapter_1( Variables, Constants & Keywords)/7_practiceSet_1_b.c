#include<stdio.h>

    // Calculate the area of a Circle and modify the same Program To claculate The Volume of a Cylinder Given its radius and Height 



int main(int argc, char const *argv[])
{

float radius ;

printf( "Enter the Value of the Radius: \n");
scanf("%f", &radius);

printf("The Area Of the Circle = %f \n", 3.14*radius*radius);

float height;
printf( "Enter the Value of the Height: \n");
scanf("%f", &height);

printf("The Area Of the Circle = %f", 3.14*radius*radius*height);

    return 0;
} 


