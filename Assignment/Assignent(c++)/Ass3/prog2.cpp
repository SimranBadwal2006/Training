#include<iostream>
using namespace std;

class Calculation{
private:
    int num1, num2;

public:
    
    Calculation(int a, int b){
        num1 = a;
        num2 = b;
    }

    void add(){
        cout << "Addition: " << num1 + num2 << endl;
    }
    void subtract(){
        cout << "Subtraction: " << num1 - num2 << endl;
    }
    void multiply(){
        cout << "Multiplication: " << num1 * num2 << endl;
    }
    void divide(){
        if(num2 != 0)
            cout << "Division: " << num1 / num2 << endl; 
        else
            cout << "Division: Cannot divide by 0" << endl;
    }
};

int main(){
    Calculation c1(10, 2);
    
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();
    
    return 0;
}