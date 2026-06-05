//write a c program to read and display all type of variables
#include <stdio.h>
int main()
{
    int int_var = 10;
    float float_var = 3.14;
    double double_var = 2.71828;
    char char_var = 'A';

    printf(" %d\n", int_var);
    printf(" %f\n", float_var);
    printf("%lf\n", double_var);
    printf(" %c\n", char_var);

    return 0;
}