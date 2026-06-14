//Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
int main(){

    int a = 1, n, sum =0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    if(n<1){
        printf("enter positive value");
        return 0;
    }
    printf("value of natural number from 1 to %d:\n",n);
    while(a<=n){
printf("%d\n", a);
sum = sum+a;
a++;
    }
    printf("\n sum= %d", sum);
    return 0;
}