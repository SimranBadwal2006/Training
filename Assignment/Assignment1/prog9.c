#include <stdio.h>

int main() {
    int amount;

    printf("Input the amount: ");
    scanf("%d", &amount);

    printf("There are:\n");

    printf("%d Note(s) of 100.00\n", amount / 100);
    amount %= 100;

    printf("%d Note(s) of 50.00\n", amount / 50);
    amount %= 50;

    printf("%d Note(s) of 20.00\n", amount / 20);
    amount %= 20;

    printf("%d Note(s) of 10.00\n", amount / 10);
    amount %= 10;

    printf("%d Note(s) of 5.00\n", amount / 5);
    amount %= 5;

    printf("%d Note(s) of 2.00\n", amount / 2);
    amount %= 2;

    printf("%d Note(s) of 1.00\n", amount);

    return 0;
}