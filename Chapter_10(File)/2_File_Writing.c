#include <stdio.h>

int main()
{
    FILE *fptr;
    int number = 45;
    fptr = fopen("Sample2.txt", "w");
    fprintf(fptr, "The Number is %d \n", number);
    fprintf(fptr, "Thanks for Using fprinf.");
    fclose(fptr);
    return 0;
}