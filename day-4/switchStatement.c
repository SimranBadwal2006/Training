#include<stdio.h>
int main()
{
    float a, b;
printf("Enter two numbers: ");
scanf("%f %f", &a, &b);
printf("enter an operator: ");
char op;
scanf(" %c", &op);//space before %c is used to consume any whitespace characters
switch(op) {
    case '+':
        printf("%f", a+b);
        break;
    case '-':
        printf("%f", a-b);
        break;
    case '*':
        printf("%f", a*b);
        break;
    case '/':
        if(b != 0) {
            printf("%f", a/b);
        } else {
            printf("division is not possible");

        }
        break;
    default:
        printf("invalid operator");
}
return 0;
}
