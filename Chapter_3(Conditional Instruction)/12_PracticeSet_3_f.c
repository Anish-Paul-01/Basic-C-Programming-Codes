#include<stdio.h>

// Write a program to find greatest of four numbers entered by the User 

int main(int argc, char const *argv[])
{
    int num1,num2,num3,num4;
    printf("Enter 1st The Numbers \n");
    scanf("%d", &num1);
        printf("Enter 2nd The Numbers \n");
    scanf("%d", &num2);
        printf("Enter 3rd The Numbers \n");
    scanf("%d", &num3);
        printf("Enter 4th The Numbers \n");
    scanf("%d", &num4);
    
    if (num1 > num2 && num1 > num3 && num1 > num4 )
    printf("This is the Greatest Number = %d ", num1);

      if (num2 > num1 && num2 > num3 && num2 > num4 )
    printf("This is the Greatest Number = %d ", num2);

      if (num3 > num2 && num3 > num1 && num3 > num4 )
    printf("This is the Greatest Number = %d ", num3);

      if (num4 > num1 && num4 > num2 && num4 > num3 )
    printf("This is the Greatest Number = %d ", num4);
    
    return 0;
}
 