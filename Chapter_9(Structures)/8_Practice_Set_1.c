#include <stdio.h>
#include <string.h>

// Create a two Dimensionel Vector Using Structures in c.

struct vector
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    struct vector v1, v2;
    v1.x = 98;
    v1.y = 21;
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);

    v2.x = 43;
    v2.y = 67;
    printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);
    return 0;
}
