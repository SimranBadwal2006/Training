//Write a C program to categorize a grade based on marks using switch case.

#include<stdio.h>

int main(){

    int marks, grade;

    printf("enter marks(0-100)");
    scanf("%d", &marks);

    if(marks<0 || marks>100){
        printf("invalid input");
        return 0;
    }
    switch(grade = marks/10){
        case 10:
        case 9:
        printf("garde A, pass");
        break;

        case 8:
        printf("grade B, pass");
        break;

        case 7:
        printf("grade C, pass");
        break;

        case 6:
        printf("grade D, pass");
        break;

        case 5:
        printf("grade E, pass");
        break;

        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        printf("fail");
        break;

        default:
        printf("invalid input");

    }
    return 0;
}