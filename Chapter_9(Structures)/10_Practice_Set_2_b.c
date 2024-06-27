#include <stdio.h>
#include <string.h>

// Write a Functiopn SumvVctor which returns the Sum of two vectors passed to it . The Vectors Must be two Dimensional (Different Process)

struct vector
{
    int x;
    int y;
};

struct vector SumVector(struct vector v1, struct vector v2 )
{
 struct vector Result;
 Result.x = v1.x + v2.x;
 Result.y = v1.y + v2.y;
 return Result;   
}


int main(int argc, char const *argv[])
{
    struct vector v1, v2, sum;
    v1.x = 98;
    v1.y = 21;
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);

    v2.x = 43;
    v2.y = 67;
    printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);
    printf("\n");

    sum = SumVector(v1, v2);
    printf("X dim of result is %d and Y dim is %d \n", sum.x , sum.y);


    return 0;
}