#include<Stdio.h>

// Write a Program to Convert Celcius(Centigrade degrees Temperature to Farenheit)

int main(int argc, char const *argv[])
{
 float Celsius;


printf ("Enter The Temperature In Centrigrade :\n");
scanf("%f" , &Celsius);


 float F =  (Celsius * 9/5) + 32;
printf ("The Fahrenheit Value of the temperature : %f", F );


    return 0;
}
