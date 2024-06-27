#include <Stdio.h>

int main(int argc, char const *argv[])
{
    // Write a C Program to calculate area of a Rectangle:
    // b) Using inputs Supplied By the User 
  int Length , Width ;

  printf("Enter The Length \n");
  scanf("%d", &Length);

  printf("Enter The Width \n");
  scanf("%d", &Width);

  printf("Area = %d \n", Length*Width);


    return 0;
}
