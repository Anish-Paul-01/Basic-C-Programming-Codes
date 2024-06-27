#include<stdio.h>

// Try Problem <<7_Practice_Set_6_3.c>>  Using call by value and Verify that it doesn't change the value of the said Variable

void TenTimesValue(int x){
    printf("The Value of a(Ten Times) is %d \n", 10*(x));
}

int main(int argc, char const *argv[])
{
     int a = 43;
    printf("The value of a is %d \n", a);
    TenTimesValue(a);
    return 0;
}
