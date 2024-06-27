#include <stdio.h>

/* Calculate income tax paid by an employee to the Government as per the Stats mentioned below:
        Income Slab             Tax
        2.5L-5.0L               5%
        5.0L-10.0L              20%
        Above 10.0L             30%
Note- There is no tax below 2.5L. Take the input from the user.
        */

int main(int argc, char const *argv[])
{
    float tax = 0, income;
    printf("Enter Your Income \n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your net Income tax to be paid By 30th of this Month is %f \n", tax);
    return 0;
}
