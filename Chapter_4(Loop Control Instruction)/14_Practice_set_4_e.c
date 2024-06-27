#include <stdio.h>

// Write A program to sum first ten natural numbers using while loop

int main(int argc, char const *argv[])
{
    
// Using While Loop

    int i=1, sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
        printf("The Sum of First 10 natural Number is %d", sum);



    return 0;
}
