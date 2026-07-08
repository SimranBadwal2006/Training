#include<iostream>
using namespace std;

class A{
        public:
        int x;
    virtual void fun(){
        cout<<"base class";
    }
};
class B: public A{
    public:
    void fun(){
        cout<<"child class";
    }
};
int main(){

    B b1;
    A *p = &b1;
    p->fun();
    return 0;
}
