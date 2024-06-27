#include <stdio.h>

// Write a program to print first n natural numbers using for loop

int main(int argc, char const *argv[])
{
    
     int n;
     printf("Enter The Value of n = ");
     scanf("%d", &n);

     for (int i = 1; i <= n; i++)
     {
         printf("First %d Natural Numbers are = %d \n", n, i);
     }
    


// A case of Decrementing for loop
    
    /**
    int i;

    for (i = 10; i; i--)
    {
        printf("%d \n", i);
    }
    **/
    return 0;
}
