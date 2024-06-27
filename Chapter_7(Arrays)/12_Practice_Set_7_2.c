#include<stdio.h>

// If S[3] is a 1-D Arreay of integers then *(S+3) refers to the third element : 
// 1> True 
// 2> False _/
// 3> Depends

int main(int argc, char const *argv[])
{
    int S[4] = {12,98067,2342,23};
    printf("The Value of *(S+3) is %d", *(S+3) );
    return 0;
}
