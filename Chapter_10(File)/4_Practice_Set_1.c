// Write a program to read three integers from a file.

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("Practical1.txt","r");
    int a ,b,c;
    fscanf(ptr ,"%d %d %d",&a,&b,&c);
    fclose(ptr);
    printf("The Values of a, b, c are %d %d %d\n",a,b,c);

return 0;
}