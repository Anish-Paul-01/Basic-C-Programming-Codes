#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[5]; // Allocate Space for Four Integers

    printf("Enter The Value of Student 1 : ");
    scanf("%d", &marks[0]);
    printf("Enter The Value of Student 2 : ");
    scanf("%d", &marks[1]);
    printf("Enter The Value of Student 3 : ");
    scanf("%d", &marks[2]);
    printf("Enter The Value of Student 4 : ");
    scanf("%d", &marks[3]);
    printf("Enter The Value of Student 5 : ");
    scanf("%d", &marks[4]);

    printf("You have Entered Student 1 : %d\n Student 2 : %d\n Student 3 : %d\n Student 4 : %d\n Student 5 : %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]);

    return 0;
}