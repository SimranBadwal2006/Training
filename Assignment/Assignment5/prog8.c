///Write a C program to create Simple Calculator using switch case.

#include<stdio.h>

int main(){
    float a, b, result;
    char op;

    printf("enter 1st number:");
    scanf("%f", &a);

    printf("enter operator:");
    scanf(" %c", &op);

    printf("enter 2nd value:");
    scanf("%f", &b);

    switch(op){
        case '+':
        result = a + b;
        printf("%.2f + %.2f : %.2f", a, b, result);
        break;

        case '-':
        result = a - b;
        printf("%.2f - %.2f : %.2f", a, b, result);
        break;

        case '*':
        result = a * b;
        printf("%.2f * %.2f : %.2f", a, b, result);
        break;

        case '/':
        if (b == 0)
        printf("error");
    else{
        result = a/b;
    printf("%.2f / %.2f : %.2f", a, b, result);
    }
    break;

    default:
    printf("invalid input");
    }

return 0;
}