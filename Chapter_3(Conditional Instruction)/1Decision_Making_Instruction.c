#include <Stdio.h>

int main()
{

    int a, b;
    printf("Enter The Number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even \n", a);
    }
    else
    {
        printf("%d is odd \n", a);
    }

    return 0;
}
