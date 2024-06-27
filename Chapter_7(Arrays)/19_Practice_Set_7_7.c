#include<stdio.h>
 
// Create an array of Size 3 X 10 containing multiplication of tables of the numbers 2,7,and 9 respectively using function

void printable(int *arr, int num , int n){
    printf("The Multiplication Table of %d is : \n", num);
    for (int i = 0; i < n; i++){
        arr[i] = num*(i+1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n",num , i+1 , arr[i]);
    }
    printf("***************************************************\n\n");
}

int main(int argc, char const *argv[])
{
    int mulTable[3][10];
    printable(mulTable[0], 2, 10);
    printable(mulTable[1], 7, 10);
    printable(mulTable[2], 9, 10);
    return 0;
}
