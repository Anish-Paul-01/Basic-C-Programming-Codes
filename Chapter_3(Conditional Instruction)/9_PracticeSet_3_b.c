#include <stdio.h>

// Write a program to find out whether a student is pass or fail, if it requires that total 40% and at least 33% in each Subject to pass. Assume 3 subjects and take marks as an input from the user. //

int main(int argc, char const *argv[])
{
    int physics, chemistry, maths;
    float total;
    printf("Enter Physics Marks \n");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks \n");
    scanf("%d", &chemistry);

    printf("Enter Math Marks \n");
    scanf("%d", &maths);

    total = (physics+chemistry+maths) /3;
    if ((total<40)|| physics <33 || chemistry <33 ||maths <33)
    {
        printf("Your total Percentage id %f and You are fail. \n" , total);
    }
    else 
     {
        printf("Your total Percentage id %f and You are pass. \n" , total);
    }

    return 0;
}
