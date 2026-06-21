#include<stdio.h>

int sum(int a, int b){
    return a+b;
}
int main(){
//     int *p;//not assigned address - wild pointer
//     printf("%d\n", *p);
//     p = NULL;

//     int x = 20;
//     int y = 30;
//    int  *const ptr = &x; //constant ptr
//     ptr = &y;  //not possible

//     //pointer to contant
//     const int *p1;
//     p1 = &x;
//     p1 = &y;
//     *p1 = 40;
//    printf("%d", *ptr) ;

//    char  s[] = "HELLO"; //string literals
//    s[0] = 'p';

int (*fp)(int, int);
fp = sum;
printf("%d", fp(3,5));
    return 0;
}