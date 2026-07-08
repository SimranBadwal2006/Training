// #include<iostream>
// using namespace std;

// class Calculator{
// private:
//     int num1, num2;

// public:
    
//     Calculator(int a, int b){
//         num1 = a;
//         num2 = b;
//     }

//     void add(){
//         cout << "Addition: " << num1 + num2 << endl;
//     }
//     void subtract(){
//         cout << "Subtraction: " << num1 - num2 << endl;
//     }
//     void multiply(){
//         cout << "Multiplication: " << num1 * num2 << endl;
//     }
//     void divide(){
//         if(num2 != 0)
//             cout << "Division: " << num1 / num2 << endl; 
//         else
//             cout << "Division: Cannot divide by 0" << endl;
//     }
// };

// int main(){
//     Calculator c1(10, 2);
    
//     c1.add();
//     c1.subtract();
//     c1.multiply();
//     c1.divide();
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Calculator{
    T a;
    T b;
    public:
    Calculator(){} // Default constructor
    Calculator(T a, T b) {
        this->a = a;
        this->b = b;
    }
    T add() {
        return a+b;
    }
    T sub() {
        a-b;
    }
    T multiply() {
        return a*b;
    }
    T division() {
        if(b != 0) {
            return a/b;
        }
        else {
            cout << "Division is not possible : " << endl;
            return 0;
        }
    }
 
};
int main() {
    
    int a = 10, b = 20;
    Calculator<int> c1(a,b);
    cout << "Add : " << c1.add() << endl;
    cout << "Multiply" << c1.multiply() << endl;
    Calculator<double> c2(5.5,6.0);
    cout << "Add : " << c2.add() << endl;
    cout << "DIvision" << c3.division() << endl;
    return 0;
}