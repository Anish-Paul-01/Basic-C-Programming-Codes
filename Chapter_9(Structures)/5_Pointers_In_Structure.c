#include <stdio.h>

#include <string.h>

struct Employee
{
    int Code;
    char Name[20];
    float Salary;
};

int main(int argc, char const *argv[])
{
    struct Employee e1;
    struct Employee *ptr;

    ptr = &e1;
    (*ptr).Code = 101;
    printf("%d \n", e1.Code);

    // Shortcut
    //  (*ptr).Code = ....; and  ptr->Salary = .....; are Same

    ptr->Salary = 2342.23;
    printf("%.2f \n", e1.Salary);

    return 0;
}
