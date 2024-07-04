/**
Take name and salary of two employees as input from the user and write them to a text file in the following format :
                    name1, 3300
                    name2, 7700
**/

#include <stdio.h>

int main()
{
    FILE *ptr;
    int Salary;
    char Empname[10];
    int n;
    ptr = fopen("Employee_Salary.txt", "w");
    printf("Enter How many entry you want to do : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Write the Employee Name and Salary : ");
        scanf("%s %d", &Empname, &Salary);
        fprintf(ptr, "%s , %d\n", Empname, Salary);
    }

    fclose(ptr);

    return 0;
}