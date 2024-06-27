#include<stdio.h>

// Write a Function to Convert Celcius Temperature into Farenheit

float Conversion(float T);

int main(int argc, char const *argv[])
{
    float a;
    printf("Enter The Readings Of Temperature in Celcius: \n ");
    scanf("%f", &a );
    printf("The Value of this temperature In Fahrenheit is : \n %f  ", Conversion(a));
    return 0;
}

float Conversion(float T){
    float Temperature;
    Temperature = (T * 9/5) + 32 ;
    return Temperature;
}