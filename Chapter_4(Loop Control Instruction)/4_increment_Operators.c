#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    printf("The Value after i++ is %d \n", i++);
    // i++; // ----> Pehle Print Fir Increment
    printf("The Value after i is %d \n", i);

    int x = 9;
    printf("The Value after ++x is %d \n", ++x);
    ++x; // ----> Pehle increment Fir print
    printf("The Value after x is %d \n", x);

    // Same Things For i-- & --i operator

    i+=10; // ---> Increments I by 10
    printf("The Value after i+= is %d \n", i);


    return 0;
}
