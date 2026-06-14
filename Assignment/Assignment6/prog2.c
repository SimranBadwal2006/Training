//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
int main(){
    int n , i;
     printf("enter the value of n: ");
     scanf("%d", &n);

     if(n<1){
       printf("enter a positive number");
       return 0;
     }
printf("Natural number from %d to 1:\n", n);
     i=n;
     while(i >= 1){
        printf("%d \n", i);
        i--;
     }
     return 0;
}