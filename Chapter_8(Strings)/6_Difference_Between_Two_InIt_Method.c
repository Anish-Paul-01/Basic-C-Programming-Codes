#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ptr1[] = "Anish Beta\n";
    // ptr1 = "Subhman Gill"; --> In this cdase it will not be reinitalize
    printf("%s", ptr1);

    char *ptr2 = "Anish Bhai\n";
    ptr2 = "Virat Kohli\n";
    printf("%s", ptr2);

    return 0;
}
