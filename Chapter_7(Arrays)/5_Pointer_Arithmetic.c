#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 32;
    int *ptr = &i;
    printf("The value of ptr is %u \n", ptr);
    ptr++;  // ---->> [ ptr = ptr + 1; ]
    ptr++;  // --->> It add 4 with the adress of i. Because, i takes 4 byte space in computer architecture/ memory.
    printf("The value of ptr is %u \n", ptr);
    ptr--;
    printf("The value of ptr is %u \n", ptr);
    ptr = ptr + 1;
    printf("The value of ptr is %u \n", ptr);
    printf("\n\n");
        

    char c = 's';
    char *ptrs = &c;
    printf("The value of ptrs is %u \n", ptrs);
    ptrs++;  // ---->> [ ptr = ptr + 1; ]
    ptrs++;  // --->> It add 4 with the adress of c. Because, c takes 4 byte space in computer architecture/ memory.
    printf("The value of ptrs is %u \n", ptrs);
    ptrs--;
    printf("The value of ptrs is %u \n", ptrs);
    ptrs = ptrs + 1;
    printf("The value of ptrs is %u \n", ptrs);
    printf("\n\n");


    float f = 3123.42;
    float *ptr1 = &f;
    printf("The value of pt1ptr1 is %u \n", ptr1);
    ptr1++;  // ---->> [ ptr = ptr + 1; ]
    ptr1++;  // --->> It add 4 with the adress of f. Because, f takes 4 byte space in computer architecture/ memory.
    printf("The value of pt1ptr1 is %u \n", ptr1);
    ptr1--;
    printf("The value of pt1ptr1 is %u \n", ptr1);
    ptr1 = ptr1 + 1;
    printf("The value of pt1ptr1 is %u \n", ptr1);
    return 0;
}

