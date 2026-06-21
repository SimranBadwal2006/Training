//C program to find HCF using function.
#include<stdio.h>

int HCF(int x, int y){
    int rem;
    while(y != 0){
        rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("HCF of %d and %d is: %d", a, b, HCF(a,b));
    return 0;
}
