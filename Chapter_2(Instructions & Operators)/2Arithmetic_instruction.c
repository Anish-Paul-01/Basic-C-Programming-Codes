#include <Stdio.h>
#include <Math.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 9;

    printf("The Value of a+b is : %d \n ", a + b);
    printf("The Value of a-b is : %d \n ", a - b);
    printf("The Value of a*b is : %d \n ", a * b);
    printf("The Value of a/b is : %d \n ", a / b);

    int z;
    z = a * b; // legal
    // a * b = z;  // illegal
    printf("The Value of z is : %d \n ", z);

    printf("98 when divided By 8 leaves a remainder of %d \n", 98 % 8);
    printf("-98 when divided By 8 leaves a remainder of %d \n", -98 % 8);
    printf("98 when divided By -8 leaves a remainder of %d \n", 98 % -8);
    // sign is same as the the Numerator
    //  No Operator Assumed to be present

    // printf("The Value of 6*7 is %d\n", (6)(7) );
    printf("The Value of 6*7 is %d\n", (6) * (7));

    // There is no operator to perform exponentiation in C
    printf("The Value of 6^2 is %d\n", 6 ^ 2); // This will Not produce 6 to the power 2
    printf("The Value of 6 to the power 2 is %f\n", pow(6, 2));

    printf("The Value of 6+8 = %d \n ", 6 + 8);
    printf("The Value of 6+8.86 = %f \n ", 6 + 8.86);
    printf("The Value of 6.765+8.86 = %f \n ", 6.765 + 8.86);
    printf("The Value of 6/4 = %d \n ", 6 / 4);
    printf("The Value of 6/4 = %f \n ", 6.0 / 4);
    printf("The Value of K = %f \n ", 3.0 / 9);

    return 0;
}
