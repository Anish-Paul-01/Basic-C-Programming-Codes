#include <stdio.h>

// Making strlen with while loop

int main(int argc, char const *argv[])
{
    int a = 0;
    char *st = "SOMA";
    while (st[a] != '\0') 
    {
        a++;
    }

    printf("Total characters of the String is = %d\n", a);

    return 0;
}
