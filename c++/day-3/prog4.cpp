#include<bits/stdc++.h>
using namespace std;
class complex{
    private:
    double real;
    double img;
    public:
    double get-real(){
        retur this -> real;
    }
    double get-img(){
        retur this -> img;
    }
    complex(){

    }
    complex(double r,double img){
this -> real =r;
this -> img = img;
    }
    complex operator + (complex obj){
complex temp;

temp.real = this - > real + obj.real;
temp.img = this -> img + obj.img;

return temp;
    }
};

int main(){
    complex c1(10,20);
    complex c2(20,30);
    complex c3 = c1.operator+(c2);

    cout<<"complex number: "<< c3.get_real<< "+" <<;

    return 0;

}
