#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter The Obtained Marks Out Of 100: \n");
    scanf("%d", &num);

    if (num >= 90 && num <= 100)
    {
        printf("Your Grade is A\n");
    }
    else if (num >= 80)
    {
        printf("Your Grade is B\n");
    }
    else if (num >= 70)
    {
        printf("Your Grade is C\n");
    }
    else if (num >= 60)
    {
        printf("Your Grade is D\n");
    }
    else if (num >= 0) // Added a lower bound check
    {
        printf("Your Grade is F\n");
    }
    else
    {
        printf("Invalid Input: Marks cannot be less than 0.\n");
    }
    return 0;
}


