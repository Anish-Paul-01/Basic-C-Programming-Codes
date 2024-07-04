#include <stdio.h>

// fgetc is a function which we use for reading a file character by character

int main()
{
    FILE *ptr;
    ptr = fopen("getc_demo.txt", "r");
    // char c = fgetc(ptr);
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
    printf("The value of my character id %c\n", fgetc(ptr));
fclose(ptr);
    return 0;
} 