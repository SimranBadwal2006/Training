//find HCF of two numbers
#include<stdio.h>
int main(){
    int a,b,rem;

    printf("enter 2 values:");
    scanf("%d %d",&a,&b);

    int originalA = a, originalB=b;
    while(rem!=0){
    rem = a%b;
    a=b;
    b=rem;
    }
    printf("H.C.F of %d and %d is:% d\n",originalA, originalB,a);
    return 0;
}