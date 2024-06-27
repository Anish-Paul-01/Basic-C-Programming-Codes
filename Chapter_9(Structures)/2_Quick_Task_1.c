#include <stdio.h>
#include <string.h>

// Write A program to store the details of 3 eployees from user defined data Use the Structuire Declared Above

struct Employee
{
    int Code;
    char Name[20];
    float Salary;
};

int main(int argc, char const *argv[])
{
    struct Employee e1, e2, e3;

    printf("Enter The Code of e1: \n");
    scanf("%d", &e1.Code);
    printf("Enter The Name of e1: \n");
    scanf("%s", e1.Name);
    printf("Enter The Salary of e1: \n");
    scanf("%f", &e1.Salary);

    printf("Enter The Code of e2: \n");
    scanf("%d", &e2.Code);
    printf("Enter The Name of e2: \n");
    scanf("%s", e2.Name);
    printf("Enter The Salary of e2: \n");
    scanf("%f", &e2.Salary);

    printf("Enter The Code of e3: \n");
    scanf("%d", &e3.Code);
    printf("Enter The Name of e3: \n");
    scanf("%s", e3.Name);
    printf("Enter The Salary of e3: \n");
    scanf("%f", &e3.Salary);

    return 0;
}
