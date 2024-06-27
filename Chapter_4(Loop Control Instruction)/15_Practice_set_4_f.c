#include<Stdio.h>

// Write A program to sum first ten natural numbers using for loop & do-while loop

int main(int argc, char const *argv[])
{

// * Using for Loop
    
    int i, sum = 0, n = 10;

    for (i = 0; i <= n; i++)
    {
        sum +=i;   //----> (Sum = Sum + i)
    }
    printf("The Value of Sum(1 to 10) is %d \n ", sum);

// Using do- while loop

int c=1,sum1 =0;
do
{
    sum1+=c;
    c++;
}while(c<=10);

printf("The sum of First 10 natural Numbers = %d", sum1);

    return 0;
}