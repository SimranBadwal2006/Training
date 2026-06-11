// C program to find maximum between two numbers using conditional operator
#include<stdio.h>
int main(){
    int a, b, max;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        max = a;
    }else{
        max = b;
    }

    printf("The Maximum nymber is: %d", max);
    return 0;
}