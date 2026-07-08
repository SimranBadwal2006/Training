#include<iostream>
using namespace std;

// template<typename T, typename u>
// u add(T a, u b){
//     return a+b;
// }

// int main(){
//     cout<<add(3, 5)<<endl;
//     cout<<add(3, 5.5)<<endl;
//     return 0;

// }
// class Number;
template<typename T>
class Number<> {

    public:
    T x;
    void func(T x){
        cout<<typeid(x) << x << endl;
    }
};
int main(){
    Number<double> * n1 = new Number<double>();
    n1->func(5);
}