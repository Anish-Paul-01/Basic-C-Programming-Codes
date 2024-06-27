#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(int argc, char const *argv[])
{

    GoodMorning();

    return 0;
}

void GoodMorning()
{
    printf("Good Morning \n");
    GoodAfternoon();
}

void GoodAfternoon()
{
    printf("Good Afternoon \n");
    GoodNight();
}
void GoodNight()
{
    printf("Good Night \n");
}