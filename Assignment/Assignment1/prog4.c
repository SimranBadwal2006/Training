//Write a C program that calculates the volume of a sphere. (Formula : V = 4/3*π*r*r*r)
#include <stdio.h>

int main() {
    float radius, volume;
    const float PI = 3.141593;

    printf("Input the radius of the sphere : ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("The volume of sphere is %f\n", volume);

    return 0;
}