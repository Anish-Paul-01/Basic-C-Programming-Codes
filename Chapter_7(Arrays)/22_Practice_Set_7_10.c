#include <stdio.h>

// Helped by ChatGpt

void generatetable(int rows, int columns, int table[rows][columns])
{
    int i = rows;
    for (int j = 1; j <= columns; j++)
    {
        table[i - 1][j - 1] = i * j;
    }
}

void displaymultable(int rows, int columns, int table[rows][columns])
{
    printf("Multiplication Table:\n");
    int i = rows;
    for (int j = 1; j <= columns; j++)
    {
        printf("%2d x %2d = %2d \n ", i, j, table[i - 1][j - 1]);
    }
    printf("\n");
}

int main()
{
    int rows, columns;

    printf("Enter the number of rows for the multiplication table: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the multiplication table: ");
    scanf("%d", &columns);

    int table[rows][columns];

    generatetable(rows, columns, table);
    displaymultable(rows, columns, table);

    return 0;
}
