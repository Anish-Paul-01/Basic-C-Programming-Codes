// Write a rogram to generate multiplication table of a given number in text format.Make sure that the file is readable and well formated.

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter any integer : \n");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    printf("Successfully Generated the Table of %d to table.txt", num);
    return 0;
}