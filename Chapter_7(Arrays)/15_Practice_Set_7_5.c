#include <stdio.h>

// Write a program containing a function which reverses the array passed through it

void Reverse(int Array[], int n)
{
    for (int j = n - 1; j < n; j--)
    {
        printf("The Value of arr[%d] is = %d \n", j , Array[j]);
        if (j <= 0)
        {
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[10] = {78, 213, 123, 53, 63, 35, 57, 54, 64, 345};
    for (int i = 0; i < 10; i++)
    {
        printf("The Value of arr[%d] is = %d \n", i , arr[i]);
    }
    printf("\n\n");
    Reverse(arr, 10);
    return 0;
}

// Process 1