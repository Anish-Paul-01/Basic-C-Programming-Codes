#include <stdio.h>

// Create a three-Dimensional array and print the address of its elements in increasing order

int main(int argc, char const *argv[])
{
    int arr[2][4][6];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            for (int k = 0; k <= 6; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u \n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}
