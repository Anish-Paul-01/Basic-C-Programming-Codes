#include<stdio.h>
#include<string.h>

struct Employee
{
    int Code;
    char Name[20];
    float Salary;
};

int main(int argc, char const *argv[])
{
    struct Employee Facebook[100];

    Facebook[0].Code = 322;
    strcpy(Facebook[0].Name, "Anish");
    Facebook[0].Salary = 3242.23;

    Facebook[1].Code = 213;
    strcpy(Facebook[1].Name, "Charles");
    Facebook[1].Salary = 978.92;

    Facebook[2].Code = 534;
    strcpy(Facebook[2].Name, "Sayan");
    Facebook[2].Salary = 234.234;

printf("Done!");

    return 0;
}
