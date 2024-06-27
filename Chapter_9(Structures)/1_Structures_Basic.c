#include <stdio.h>
#include <string.h>

struct employee
{
    int Code;
    float Salary;
    char name[20];
};

int main(int argc, char const *argv[])
{
    int a = 45;
    char b = 'A';
    float d = 3432.23;
    // employee.e1;
    // e1.Salary = 89.978; ---> Won't work without employee Structure

    struct employee e1;
    e1.Code = 191;
    e1.Salary = 786.98;
    // e1.name = "Harry"  ---> Won't work
    strcpy(e1.name, "Anish");

    printf("%d\n", e1.Code);
    printf("%.2f\n", e1.Salary);
    printf("%s\n", e1.name);

    return 0;
}
