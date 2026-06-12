//to check whether the given number is armstroong or not
#include<stdio.h>
#include<math.h>
int main(){

    int original;
    scanf("%d", &original);

    //count digits in a value
    int num = original;
    int cnt = 0;
    while(original>0){
        original/=10;
       cnt++;
    }
// printf("%d", original);
num = original;
int sum = 0;

while(num>0){
    int rem = num%10;//3

    sum += pow(rem,cnt);//27 + 125 +1
    num/=10; //15
}
if(sum==original){
    printf("Num is armstrong");

}
else{
    printf("not an armstrong number");
}
return 0;
}