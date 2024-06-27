#include<stdio.h>

// Write a program to print multiplication table of 10 in reversed order

int main(int argc, char const *argv[])
{
    int n=10;
    int a=10;

while (a <=10 && a>0)
{
    printf("%d X %d = %d \n", n ,a, n*a);
    a--;
}

// Using For Loop

printf("\n\n***** Multiplication Table of !0 ****** \n\n ");
for(int i=10;i;i--){
    printf("10 X %d = %d \n ", i, 10*i);
}

    return 0;
}

/**
 Q3)
A do while Loop is Executed :
1. at least once ------> This is right 
2. at least twice X
3. at most once X

Q4)
What can be Done using one type of loop can also be done using the other two types of loops ----> true 
**/