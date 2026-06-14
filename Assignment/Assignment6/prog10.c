//Write a C program to count number of digits in a number.
#include<stdio.h>
int main(){
    int count = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0){
        count = 1;
    }
    else{
        if(n < 0){  
            n = -n;
        }
        
        while(n > 0){  
            n = n / 10;  
            count++;     
        }
    }
    
    printf("Total digits = %d", count);
    return 0;
}