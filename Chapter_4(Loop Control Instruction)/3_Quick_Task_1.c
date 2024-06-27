#include<stdio.h>

//  Write A program to print Natural Numbers From 10 to 20 When initial loop counters is inotialiged to 0

int main(int argc, char const *argv[])
{
    /**
    int a=0;

    while(a+10 >=10 & a+10 <=20){
        printf("Natural Numbers From 10 to 20 : %d \n", a+10); 
        a++;
    }
    **/

   int a = 0;
   while( a <=20){
    if ( a >=10){
        printf("The Value of i is %d \n" , a);
    }
    a++;
   }
    return 0;
}
