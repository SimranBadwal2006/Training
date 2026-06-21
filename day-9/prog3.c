#include<stdio.h>
int HCF(int *, int *);
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("HCF of %d and %d is: %d", a, b, HCF(a,b));
    return 0;
}
    int HCF(int *a, int *b){
        int rem;
        while(*a%*b!= 0){
            rem = *a % *b;
            *a = *b;
           * b = rem;
        }
        return *a;
    }