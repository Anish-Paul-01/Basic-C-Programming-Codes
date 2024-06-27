#include <stdio.h>

// Write a program containing functions which counts the number of positive integers in the array

void count(int *arr, int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            a++;
        }
    }
     printf("No. of positive integers is %d\n", a);
}

int main(int argc, char const *argv[])
{
    int arr[13] = {12, -32, 23, -23, -7, 98, 45, -65, 56, 78, -21, 52, 42};
    count(arr, 13);
    return 0;
}
