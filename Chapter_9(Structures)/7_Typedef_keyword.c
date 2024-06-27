#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    int code;
    char Name[20];
    float Salary;
}emp;

void show( emp emp1){
    printf("The Code of Employee is %d \n", emp1.code);
    printf("The Name of Employee is %s \n", emp1.Name);
    printf("The Salary of Employee is %.2f \n", emp1.Salary);
}

int main(int argc, char const *argv[])
{
    // Declaring e1 and ptr
    emp e1;
    emp *ptr;

    // Pointing ptr to e1
    ptr = &e1;

    // Set the member value for e1
    (*ptr).code = 231278;
    strcpy((*ptr).Name, "Haranjeet");
    (*ptr).Salary = 9087.787;

show(e1);

    return 0;
}
