#include <stdio.h>

int main() {
    int minutes, hours, remaining_minutes;

    printf("Input minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("%d Hours, %d Minutes\n", hours, remaining_minutes);

    return 0;
}