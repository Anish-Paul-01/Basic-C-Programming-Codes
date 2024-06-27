 #include<stdio.h>

 void display();  // Function Prototype

 int main(int argc, char const *argv[])
 {
    int a;
    printf("Initializing display Function\n");
    display();  // Function Call
    printf("Display Function Finished its Work\n");

    return 0;
 }

// Function Definition
 void display(){
    printf("This is display \n");
 }
 