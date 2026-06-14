//Write a C program to print all even numbers between 1 to 100. - using while loop

#include<stdio.h>
int main(){
    int a =2;
    printf("all even numbers between 1 to 100:\n");

    while(a<=100){
        printf(" %d",a);
        a += 2;
    }
    return 0;
}