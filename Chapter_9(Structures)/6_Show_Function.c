#include<stdio.h>
#include<string.h>

struct Employee
{
    int Code;
    char Name[20];
    float Salary;
};

void show(struct Employee emp){
    printf("The Code of Employee is %d \n", emp.Code);
    printf("The Name of Employee is %s \n", emp.Name);
    printf("The Salary of Employee is %.2f \n", emp.Salary);
}

int main(int argc, char const *argv[])
{
    struct Employee e1;
    struct Employee *ptr;

    ptr = &e1;
    ptr->Code = 987;
    strcpy(ptr->Name, "Anish");
    ptr->Salary = 798.978;

    printf("Code of Employee E1 = %d \n",e1.Code );
    printf("Name of Employee E1 = %s \n",e1.Name );
    printf("Salary of Employee E1 = %.2f \n",e1.Salary );
    printf("\n");


    show(e1);

    return 0;
}
