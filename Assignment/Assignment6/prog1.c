//Write a C program to print all natural numbers from 1 to n. - using while loop

#include<stdio.h>
int main(){
    int n , i=1;
     printf("enter the value of n: ");
     scanf("%d", &n);

     if(n<1){
       printf("enter a positive number");
       return 0;
     }
printf("Natural number from 1 to %d:\n", n);
     while(i<=n){
        printf("%d \n", i);
        i++;
     }
     return 0;
}