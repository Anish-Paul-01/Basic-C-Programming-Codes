#include <stdio.h>

// Create an array of Size 3 X 10 containing multiplication of tables of the numbers 2,7,and 9 respectively not using function

int main(int argc, char const *argv[])
{
    int mulTable[3][10];

    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = 2 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("2 x %d =  %d \n", i + 1, mulTable[0][i]);
    }



    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = 7 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("7 x %d =  %d \n", i + 1, mulTable[0][i]);
    }



    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = 9 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("9 x %d =  %d \n", i + 1, mulTable[0][i]);
    }

    return 0;
}
