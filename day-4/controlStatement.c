#include<stdio.h>
int main()
{
    //control statement
// int x = -20;

//     if(x>0)
//     {
//         printf("x is positive");
//     }
//     else if(x<0)
//     {
//         printf("x is negative");
//     }
//     else
//     {
//         printf("x is zero");
//     }
int a,b,c; //10,20,25
scanf("%d%d%d",&a,&b,&c);


if(a>b && a>c){
    printf("%d is maximum",a);
} else if(b>a && b>c) {
    printf("%d is maximum",b);
}
else {
    printf("%d is maximum",c);
   
}  
int a,b,c; //10,20,25
scanf("%d%d%d",&a,&b,&c);
int max = a;
if(max<b){
    max = b;
}
if(max<c){
    max = c;
}
printf("%d is maximum", max);
return 0;
}
