#include <stdio.h>

int main() {
    float kmph, mph;

    printf("Input kilometers per hour: ");
    scanf("%f", &kmph);

    mph = kmph * 0.621371;

    printf("%f miles per hour\n", mph);

    return 0;
}