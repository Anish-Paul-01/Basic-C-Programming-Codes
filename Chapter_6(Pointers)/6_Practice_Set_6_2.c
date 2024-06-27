#include<stdio.h>

// Write a program having a Variable i. Print the address of i . Pass this variable to a Function and print its address Are this addresses Same? Why?

void Printadd(int a);

int main(int argc, char const *argv[])
{
    int i= 3;
    printf("The Value of i is %d \n", i);
    Printadd(i);
    printf("1The Address of i is %u \n", &i);

    return 0;
}


void Printadd(int a){
    printf("The Address of i is %u \n", &a);
}

// When the variable Passed through a function then the function copied the value of the variable from main function. The value of i = 4 , but in the memory the address is different for main function and Printadd function.