#include<iostream>
using namespace std;
void swap(int *a, int *b){//call by address - pointer
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"value of a:" <<*a<<endl;
    cout<<"value of b:" <<*b<<endl;
}
void swap(int &a, int &b){ //call by reference in c++
    int temp = a;
    a = b;
    b = temp;
    cout<<"value of a:" <<a<<endl;
    cout<<"value of b:" <<b<<endl;
}
int main(){
    int a = 10, b =20;
    swap(&a,&b);//20,10

    cout<<"with of function call value of a:" <<a<<endl;
    cout<<"with of function call value of b:" <<b<<endl;
}