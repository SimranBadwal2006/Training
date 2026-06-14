//Write a C program to print all odd number between 1 to 100.
#include<stdio.h>
int main(){
    int a =1;
    printf("all odd numbers between 1 to 100:\n");

    while(a<=100){
        printf(" %d",a);
        a += 2;
    }
    return 0;
}