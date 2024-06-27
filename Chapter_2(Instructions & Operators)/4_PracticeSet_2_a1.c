#include<Stdio.h>

int main(int argc, char const *argv[])
{
    int a; int b = a;  // int a; b = a; -->> This is Wrong 
    int V= 3 ^ 3 ;  // Technically this is valid. But, This not gives #tothe power 3
    char dt = 'D'; //Thsi Is Right But This Is Not Valid    Char dt = '21 Dec 2020';
    float d =(3.0/8-2);

    printf("%d \n", V);
    printf("%f \n", d);

    return 0;
}
