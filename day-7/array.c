// convert decimal to binary 
#include <stdio.h>
int main(){
    int num, i, binary, rem, base;
    printf("enter the decimal number:");
    scanf("%d", &num);

    base=1;
    binary = 0;
    while(num>0){
        rem = num%2;
        binary += rem*base;
        num = num/2;
        base = base*10;
    }
    printf("binary number is: %d", binary);

}
