#include <stdio.h>

// Create a 2-D array by taking input from the User. Write a Display function to print the content of this 2-D array on the screen

void Display(int arr[][5], int m, int n)
//  When you pass a 2D array to a function, you need to specify the size of the second dimension (the number of columns)
{
    for (int a = 0; a < m; a++)
    {
        for (int b = 0; b < n; b++)
        {
            printf("The run scored by player no. %d in match no. %d is %d\n", a + 1, b + 1, arr[a][b]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int player = 3;
    int match = 5;

    int run[3][5];
    for (int i = 0; i < player; i++)
    {
        for (int j = 0; j < match; j++)
        {
            printf("Enter the run scored by player no. %d in match no. %d \n", i + 1, j + 1);
            scanf("%d", &run[i][j]);
        }
    }
    Display(run, 3, 5);

    return 0;
}
