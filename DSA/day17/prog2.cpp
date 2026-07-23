#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int out=fact(5);
    cout<<"Factorial of 5 is: "<<out<<endl;
    return 0;
}