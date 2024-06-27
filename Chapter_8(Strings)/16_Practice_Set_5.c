#include <stdio.h>

// Write your own version of strcpy() function from string.h

void strcp(char *st1, char *st2)
{
    int i = 0, j = 0;
    while (st2[i] != '\0')
    {
        st1[i] = st2[j];
        i++;
        j++;
    }

    st1[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char *source;
    char target[50];
    printf("Enter Anything : ");
    gets(source);
    strcp(target, source);
    printf("%s", target);
    return 0;
}
