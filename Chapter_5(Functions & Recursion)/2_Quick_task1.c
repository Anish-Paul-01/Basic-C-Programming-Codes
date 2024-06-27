#include<stdio.h>

void Goodmorning();
void Goodafternoon();
void Goodnight();

int main(int argc, char const *argv[])
{
    Goodmorning();
    Goodafternoon();
    Goodnight();

    return 0;
}

void Goodmorning(){
    printf("Good Morning\n");
}
void Goodafternoon(){
    printf("Good Afternoon\n");
}
void Goodnight(){
    printf("Good Night\n");
}