#include<stdio.h>

// putc function is used for writing in a file character by character

int main(){
    FILE *ptr;
    ptr = fopen("putc_demo.txt","w");
    putc('A',ptr);
    putc('N',ptr);
    putc('I',ptr);
    putc('S',ptr);
    putc('H',ptr);
    fclose(ptr);
return 0;
}