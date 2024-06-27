#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char st1[15] = "Hello";
    char *st2 = "Anish";
    char st3[15] = "Hello";
    char *st4 = "Hfllo";

    int val1 = strcmp(st1,st2);
    int val2 = strcmp(st1,st3);
    int val3 = strcmp(st1,st4);
    
    printf("Now The val1 is %d \n", val1);
    printf("Now The val2 is %d \n", val2);
    printf("Now The val3 is %d \n", val3);

    return 0;
}
