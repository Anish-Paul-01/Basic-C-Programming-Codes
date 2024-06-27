#include <stdio.h>
#include <string.h>

// Write a Functiopn SumvVctor which returns the Sum of two vectors passed to it . The Vectors Must be two Dimensional

struct vector
{
    int x;
    int y;
};

void SumVector(struct vector Vcetor1, struct vector Vcetor2)
{
    int SumX, SumY;
    SumX = Vcetor1.x + Vcetor2.x;
    printf("Sum of Vector's X dim =  %d \n", SumX);
    SumY = Vcetor1.y + Vcetor2.y;
    printf("Sum of Vector's Y dim =  %d \n", SumY);
}

int main(int argc, char const *argv[])
{
    struct vector v1, v2;
    v1.x = 98;
    v1.y = 21;
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);

    v2.x = 43;
    v2.y = 67;
    printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);
    printf("\n");

    SumVector(v1, v2);

    return 0;
}
