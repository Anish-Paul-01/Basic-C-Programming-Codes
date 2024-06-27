#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter The Age \n");
    scanf("%d", &age);
    if (age >= 85)
    {
        printf("You are above 85, You cannot drive \n");
    }
    else
    {
        printf("You can Drive \n");
    }
    if (age <= 18)
    {
        printf("You are below 18, You cannot drive \n");
    }
    else
    {
        printf("No Problem, Carry On \n");
    }
    
    if (age == 50)
    {
        printf("Yay! Half Century of your age \n ");
    }
    else
    {
        printf("Not Half Century\n");
    }

    if (age == 100)
    {
        printf("Yay! Century of your age. But , Don't Drive \n ");
    }
    else 
    {
        printf("Not Century\n");
    }

    return 0;
}
