#include <stdio.h>

// Write a program to check Leap year

int main(int argc, char const *argv[])
{
    int Year;
    printf("Enter The Year \n");
    scanf("%d", &Year);

    if (Year % 100 != 0)
    {

        if (Year % 4 == 0)
        {
            printf("This Year is Leap Year \n");
        }
        else
        {
            printf("This Year is not Leap Year \n");
        }
    }
    if (Year % 100 == 0)
    {

        if (Year % 400 == 0)
        {
            printf("This Year is Leap Year \n");
        }
        else
        {
            printf("This Year is not Leap Year \n");
        }
    }

    return 0;
}
