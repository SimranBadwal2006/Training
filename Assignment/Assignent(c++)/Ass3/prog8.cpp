#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
    int empCode;
    string empName;
    double basicSalary;

public:
    
    Employee(int c, string n, double s){
        empCode = c;
        empName = n;
        basicSalary = s;
    }

    void display(){
        cout << "Emp Code: " << empCode << endl;
        cout << "Emp Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

int main(){
    Employee e1(101, "Rohan", 35000.0);
    cout << "Employee Details:" << endl;
    e1.display();

    return 0;
}