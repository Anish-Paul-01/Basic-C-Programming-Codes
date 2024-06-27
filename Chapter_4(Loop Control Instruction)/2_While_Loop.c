#include <stdio.h>

/**While Loop Syntax :-

While ( Condition Is true){
    //code
    //code
}
**/

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);

//while(a < 10)
while(a > 10 && a < 1000 )
{
    printf("%d \n", a);
    a++;
}
    return 0;
}
