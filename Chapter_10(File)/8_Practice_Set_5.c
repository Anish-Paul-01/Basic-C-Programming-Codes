// Write a program to modify a file containing an integer to double it's value.

#include <stdio.h>

int main()
{
    FILE *ptr1;
    int num1, num2;
    ptr1 = fopen("Practice_set_5_Demo1.txt", "r");
    fscanf(ptr1, "%d", &num1);
    num2 = 2 * num1;
    fclose(ptr1);
    ptr1 = fopen("Practice_set_5_Demo1.txt", "w");
    fprintf(ptr1, "%d", num2);
    fclose(ptr1);
}