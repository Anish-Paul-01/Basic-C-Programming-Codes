#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("Sample1.txt", "r");
    if (ptr == NULL)
    {                       // Checking Whether the file exist or not.
        printf("The file does not exist \n");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The Value of num1 is %d \n", num1);
        printf("The Value of num2 is %d \n", num2);
    }
    return 0;
}