#include<Stdio.h>

// Sum is a function which takes a and b as input and returns as an output 

int sum( int a, int b ); // Fuction Prototype Declaration

int main(int argc, char const *argv[])
{
    int c;
    c= sum (23,5); //Function call
    printf("The Value of C is %d \n", c);
    return 0;
}

int sum( int a, int b ){
    int result;
    result = a + b ;
    return result;
}
