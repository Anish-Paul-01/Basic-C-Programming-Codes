#include <stdio.h>

// Write A function to Calculate force of attraction on a body of mass m exerted by earth(g = 9.8m/s^2)

float force(float mass);

int main(int argc, char const *argv[])
{
    float m;
    printf("Enter The Value Of Mass(in kg):\n");
    scanf("%f", &m);
    printf("Force Of Atttraction on a body of mass %.2f kg exerted by earth is :\n%.2f Newton ", m, force(m));
    return 0;
}

float force(float mass)
{
    float Result;
    float g = 9.8;
    Result = mass * g;
    return Result;
}