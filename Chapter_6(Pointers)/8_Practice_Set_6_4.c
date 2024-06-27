#include<stdio.h>

// Write a Program using a function which Calculates the Sum and average of two numbers. Use pointer and print the values of sum and Average in main()

void sumAndAvg(int a ,int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

int main(int argc, char const *argv[])
{
    int m, n, sum;
    float avg;
    m = 3;
    n = 8;
    sumAndAvg( m, n, &sum, &avg);
    printf("The Value of sum is %d \n", sum);
    printf("The Value of avg is %.2f \n", avg);
    
    return 0;
}
