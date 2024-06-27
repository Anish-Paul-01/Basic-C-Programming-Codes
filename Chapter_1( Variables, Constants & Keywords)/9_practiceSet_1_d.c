#include<stdio.h>

// Write a Program to Calculate Simple interest for a set of Values Representing principle, No. of years and Rate of Interest 



/* 
int main(int argc, char const *argv[])
{
float Principle_amount, Rate_of_Interest, Time_in_years;

printf("Enter The Principle Amount:\n");
scanf("%f", &Principle_amount);

printf("Enter The Rate of Interest:\n");
scanf("%f", &Rate_of_Interest);

printf("Enter Tiime (In Years):\n");
scanf("%f", &Time_in_years);

printf("The Value of Simple Interest = %f",(Principle_amount* Rate_of_Interest*Time_in_years)/100 );

    return 0;
}
*/


int main(int argc, char const *argv[])
{
    float Principle =200, Rate=5, Time=3;
    float SimpleInterest= (Principle*Rate*Time)/100;


printf("The Value of Simple Interest = %f", SimpleInterest);

    return 0;
}
