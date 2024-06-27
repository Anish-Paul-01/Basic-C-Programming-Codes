#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *ptr1 = "Anish is a Good boy \n";
    printf("%s", ptr1);


    char ptr2[] = "Anish is a Bad boy \n";
    printf("%s", ptr2);

    return 0;
}
