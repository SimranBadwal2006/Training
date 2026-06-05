// Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
#include <stdio.h>

int main() {
    int emp_id, hours;
    float salary_per_hour, salary;

    printf("Input the Employees ID: ");
    scanf("%d", &emp_id);

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &salary_per_hour);

    salary = hours * salary_per_hour;

    printf("\nEmployees ID = %04d\n", emp_id);
    printf("Salary = %.2f\n", salary);

    return 0;
}