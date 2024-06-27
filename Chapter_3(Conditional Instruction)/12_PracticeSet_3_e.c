#include<stdio.h>

// Write  a program to Determine  whether a character entered by the user is lowercase or Not

int main(int argc, char const *argv[])
{
    // 97 - 122 = a-z   ASCII value table 
    char ch;
    printf("Enter the Character : \n");
    scanf("%c", &ch );
    if (ch<=122 && ch>=97)
    {
        printf("It is Lowercase ");
    }
    else
    {
        printf("It is not Lowercase ");
    }
    
    


    return 0;
}
