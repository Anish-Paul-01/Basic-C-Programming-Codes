#include<Stdio.h>

int main(int argc, char const *argv[])
{

    int x = 10 ; 
    int y =  3 ;
    

    printf("The value of 3*x - 5*y is %d \n", 3*x - 5*y );
    printf("The value of 3*x / 5*y is %d \n", 3*x / 5*y );
    // 3*10 / 5*3 = 18 will give Wrong Answer , C-language is Not follow the BODMAS Rule , In Some Priority Condition It Calculate By the Asscociativity.
    // 3*10 / 5*3 = 
    //30/5*3 = 
    //6*3 = 
    //18


    return 0;
}
