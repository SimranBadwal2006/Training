// /Write a C program to check whether a number is even or odd using switch case.

#include<stdio.h>

int main(){
    int num;

    printf("enter the number: ");
    scanf("%d", &num);

    switch(num % 2){
        case 0:
        printf("%d is even", num);
    break;

    case 1:
    printf("%d is odd", num);
break;

default:
printf("invalid input");

    }
    return 0;
}