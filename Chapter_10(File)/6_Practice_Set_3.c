//Write a program to read a text file character by character and write it's content twice in a separated file.
#include<stdio.h>

int main(){
    FILE *ptr1;    
    FILE *ptr2;
    ptr1 = fopen("TextFile1.txt","r");    
    ptr2 = fopen("TextFile2.txt","w");

    char c = fgetc(ptr1);
    while(c != EOF){
        fputc(c,ptr2);
        fputc(c,ptr2);
        c = fgetc(ptr1);
    }    
    fclose(ptr1);
    fclose(ptr2);
return 0;
}