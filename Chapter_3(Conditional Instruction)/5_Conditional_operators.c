#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a \n");
    scanf("%d", &a);

    // One Liner 

    (a < 6) ? printf("A is Less Than 6") : printf("A is not Less Than 6");

    return 0;
}
