#include<stdio.h>
    
int main(int argc, char const *argv[])
{
    int marks[4];
    int *ptr;
    // ptr = &marks[0];
    ptr = marks;
    for(int i = 0; i<4 ; i++){
        printf("Enter the Value of marks for student %d : \n",i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int i = 0; i<4 ; i++){
        printf("The Value of marks for student %d is %d \n", i+1, marks[i]);
    }

    return 0;
}
