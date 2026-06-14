//Write a C program to display a menu for arithmetic operations and perform the selected operation using switch case

#include<stdio.h>

int main(){
    float a, b, result;
    int choice;

printf("----Menu for arithmetic operations----\n");
printf("1. Addition + \n");
    printf("2. Subtraction -\n");
    printf("3. Multiplication *\n");
    printf("4. Division /\n");
    printf("5. Modulus %%\n");

    printf("enter your choice:");
    scanf("%d", &choice);

    printf("enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice){
        case 1:
        result = a + b;
        printf("%.2f + %.2f : %.2f", a, b, result);
        break;

        case 2:
        result = a - b;
        printf("%.2f - %.2f : %.2f", a, b, result);
        break;

        case 3:
        result = a * b;
        printf("%.2f * %.2f : %.2f", a, b, result);
        break;

        case 4:
        if (b == 0)
        printf("error");
    else{
        result = a/b;
    printf("%.2f / %.2f : %.2f", a, b, result);
    }
    break;

   case 5:
            printf("Result: %d %% %d = %d", (int)a, (int)b, (int)a % (int)b);
            break;

    default:
    printf("invalid input");
    }

return 0;
}