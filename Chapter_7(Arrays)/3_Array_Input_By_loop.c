#include <stdio.h>


int main(int argc, char const *argv[])
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Value of marks for student %d :", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The Value of marks for student %d is : %d  \n", i + 1, marks[i]);
    }

    return 0;
}