#include<iostream>
using namespace std;

class Base{
protected: 
    int i;

public:
    void printNum(){
        cout << "Value of i = " << i << endl;
    }
};

class Derived : public Base{
private:
    int j;

public:
    void setData(int x, int y){
        i = x; 
        j = y; 
    }

    void printNum(){ 
        cout << "Value of j = " << j << endl;
    }
};

int main(){
    Derived d;
    d.setData(10, 20); 
    d.printNum(); 

    return 0;
}