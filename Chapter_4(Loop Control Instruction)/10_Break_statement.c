#include <stdio.h>

// Break Statement

int main(int argc, char const *argv[])
{
    int i=0;

    // for (i = 0; i < 1000; i++)
    // {
    //     printf("%d \n", i);
    //     if (i == 29)
    //     {
    //         break;
    //     }
    // }

do{
    printf("The value of i is %d \n",i); 
    
    if (i==19){
        break;
    }
    i++;
}while(i<39);

return 0;

}

