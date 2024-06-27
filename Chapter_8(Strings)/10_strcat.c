#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    char str1[15] = "Hello";
    char *str2 = "Anish";

    strcat(str1,str2);

    printf("Now str1 is  %s ",str1);


    return 0;
}
