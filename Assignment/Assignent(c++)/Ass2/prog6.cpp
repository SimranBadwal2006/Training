#include<iostream>
#include<string> 
using namespace std;

class Employee{
private: 
    string name;
    int empID;
    double salary;

public:
    Employee(string n, int id, double sal){
        name = n;
        empID = id;
        salary = sal;
    }

    
    void setSalary(int performanceScore){
        salary = salary + (performanceScore * 1000);
    }

    void display(){
        cout << "ID: " << empID <<endl;
        cout<< "  Name: " << name <<endl;
        cout<< "  Salary: " << salary << endl;
    }
};

int main(){
    Employee e1("Aarav", 101, 30000); 

    cout << "Before: ";
    e1.display(); 

    e1.setSalary(5); 
    cout << "After Performance 5: ";
    e1.display();

    Employee e2("Isha", 102, 30000);
     cout << "Before: ";
    e2.display(); 
    e2.setSalary(2); 
    cout << "After Performance 2: ";
    e2.display(); 

    return 0;
}