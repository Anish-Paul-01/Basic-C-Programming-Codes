#include<stdio.h>

// Which of the following is used to appropriately read a multi-word string
// (a) gets()
// (b) puts()
// (c) printf()
// (d) scanf()

int main(int argc, char const *argv[])
{
    char a[30];
    printf("Enter You Name:");
    gets(a);
    puts(a);
    return 0;
}

 
// ANS = gets()