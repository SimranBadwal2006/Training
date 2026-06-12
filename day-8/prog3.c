#include<stdio.h>
int main(){
    // int arr[2][3]={[1][0]=1, [1][1]=2,[2][2]=0};

    int arr[2][3] = {{1,2,4}, {1,2,3}};
    printf("%p\n", arr);//100
     printf("%p\n", &arr);//100
    printf("%p\n", arr+1);//112
     printf("%p\n", *arr[0]+1);//104

     return 0;
}