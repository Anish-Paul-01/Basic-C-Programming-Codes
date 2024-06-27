#include<stdio.h>
#include<string.h>

// Write a program to illustrate the use of arrow opertaor -> in c

typedef struct Student{
    int Student_Roll;
    char Student_Name[30];
    float Student_CGPA;
}Student;

int main(int argc, char const *argv[])
{
    Student S1, S2;
    Student *ptr1 ,*ptr2;

    ptr1 = &S1;
    ptr2 = &S2;

    S1.Student_Roll = 76;
    strcpy(S1.Student_Name, "Anish Paul");
    S1.Student_CGPA = 8.9;

    S2.Student_Roll = 32;
    strcpy(S2.Student_Name, "Sayan Dhara");
    S2.Student_CGPA = 7.2;

    printf("Roll of Student without using arrow Function = %d \n", (*ptr1).Student_Roll);
    printf("Name of Student without using arrow Function = %s \n", (*ptr1).Student_Name);
    printf("CGPA of Student without using arrow Function = %.1f \n", (*ptr1).Student_CGPA);

    printf("\n\n");

    printf("Roll of Student without using arrow Function = %d \n", ptr2->Student_Roll);
    printf("Name of Student without using arrow Function = %s \n", ptr2->Student_Name);
    printf("CGPA of Student without using arrow Function = %.1f \n", ptr2->Student_CGPA);
   

    return 0;
}
