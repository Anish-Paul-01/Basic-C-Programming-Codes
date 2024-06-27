#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter The Age \n");
    scanf("%d", &age);
    int Driving_License;
    printf("Enter The year of your Driving LIcense Issue \n");
    scanf("%d", &Driving_License); 
    // if (age >= 85 && age <= 18) this will not worK Because And(&&) means Two Condition's validity check in One input
    if (age >= 85 || age < 18)     // ' || ' is Or Operator
    {
        printf("You are either above 85 or Below !8, so, You cannot drive \n");
    }
    else
    {
        printf("You can Drive \n");
    }
     if (Driving_License >= 2018 && Driving_License < 2024 )
    {
        printf("You Can Drive \n");
    }
    else
    {
        printf("You cannot Drive, it's illegal \n");
    }

    return 0;
}
