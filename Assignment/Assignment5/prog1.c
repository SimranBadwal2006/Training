//Write a C program to print day of week name using switch case.
#include<stdio.h>
int main(){
    int day;

    printf("enter the day number(1to 7): ");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;

        case 3:
        printf("tueasday");
        break;

        case 4:
        printf("wednesday");
        break;

        case 5:
        printf("thusrsday");
        break;

        case 6:
        printf("friday");
        break;

        case 7:
        printf("saturday");
        break;

        default:
        printf("invalid input");

    }
    return 0;
}