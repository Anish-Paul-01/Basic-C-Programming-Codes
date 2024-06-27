#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a , b;
    printf("Enter the value of a \n");

    scanf("%f", &a);

    printf("Enter the value of b \n");

    scanf("%f", &b);

    printf(" The a+b = %f  \n" , a+b );
    printf(" The a-b = %f  \n" , a-b );
    printf(" The a*b = %f  \n" , a*b );
    printf(" The a/b = %f  \n" , a/b );


    return 0;
}