//Write a C program to find roots of a quadratic equation using switch case.
#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, D, root1, root2, real, imag;
    printf("enter a, b & c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
    printf("Not a quadratic eqation");
    }
    D = b*b - 4*a*c;
    printf("D is :%.2f\n", D);

    switch((D>0) - (D<0)){
        case 1:
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("two real roots: %.2f %.2f", root1, root2);
        break;

        case 0:
        root1 = -b/(2*a);
        printf("one real root: %.2f", root1);
        break;

        case -1:
        real = -b/(2*a);
        imag = sqrt(-D)/(2*a);
        printf("imaginary roots: %.2f + %.2fi and %.2f - %.2fi", real, imag, real, imag);
        break;

    }
    return 0;
}