#include<stdio.h>

void change(int a);

int main(int argc, char const *argv[])
{
    int b = 832;
    printf("The Value of b before change is %d \n",b);
    change(b);
    printf("The Value of b after change is %d \n",b);
    return 0;
}

void change(int a){
    a = 54;
}