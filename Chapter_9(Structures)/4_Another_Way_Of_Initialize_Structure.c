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
    struct Employee Anish ={879,"Anish",1321.12};
    
    printf("Employee Code is %d \n", Anish.Code);
    printf("Employee Name is %s \n", Anish.Name );
    printf("Employee Salary is %.3f \n", Anish.Salary );



    return 0;
}
