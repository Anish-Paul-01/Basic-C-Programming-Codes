#include <stdio.h>

// Write A Program Using nfunctions to Find average of three Numbers //

float Average(int a, int b, int c);

int main()
{
    int x, y, z;
    printf("Enter The Value of x \n");
    scanf("%d", &x);
    printf("Enter The Value of y \n");
    scanf("%d", &y);
    printf("Enter The Value of z \n");
    scanf("%d", &z);
    printf("The Average of These Three NUmber is: %f", Average(x, y, z));
    return 0;
}

float Average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}  