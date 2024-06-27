#include<stdio.h>

// Problem No. 5 , Process - 2

void reverse(int *arr, int n){
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverse(arr ,7);
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is : %d\n",i,arr[i]);
    }
    
    return 0;
}
