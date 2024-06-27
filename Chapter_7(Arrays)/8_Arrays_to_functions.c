#include <stdio.h>

// void printarray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The Value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printarray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The Value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[3] = 8976; // This value will be changes in arr array of main as well
}

int main(int argc, char const *argv[])
{
    int arr[] = {154, 2342, 135, 23, 77, 807, 45, 37};
    printarray(arr, 8);
    printf("The Value of arr[3] is %d",arr[3]);
    return 0;
}
