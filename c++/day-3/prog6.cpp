#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    
    Employee() {
        name = "";
        employeeID = 0;
        salary = 0.0;
    }
    
    Employee(string n, int id, double s) {
        name = n;
        employeeID = id;
        salary = s;
    }

  
    void setName(string n) {
        name = n;
    }
    
    void setEmployeeID(int id) {
        employeeID = id;
    }
    
    void setSalary(double s) {
        if(s >= 0)
            salary = s;
        else 
            cout << "Salary cannot be negative!" << endl;
    }

   
    string getName() {
        return name;
    }
    
    int getEmployeeID() {
        return employeeID;
    }
    
    double getSalary() {
        return salary;
    }

  
    void calculateSalaryByPerformance(int rating, double baseSalary) {
        double bonus = 0;
        switch(rating) {
            case 1: bonus = 0; break;
            case 2: bonus = baseSalary * 0.05; break;   // 5% bonus
            case 3: bonus = baseSalary * 0.10; break;   // 10% bonus
            case 4: bonus = baseSalary * 0.15; break;   // 15% bonus
            case 5: bonus = baseSalary * 0.25; break;   // 25% bonus
            default: 
                cout << "Invalid rating! Enter 1-5" << endl;
                return;
        }
        salary = baseSalary + bonus;
        cout << "Salary updated based on performance rating " << rating << endl;
    }

    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1;
    
    emp1.setName("Rahul Sharma");
    emp1.setEmployeeID(101);
    emp1.setSalary(50000);
    
    cout << "Initial Details:" << endl;
    emp1.display();
    
    cout << "\nAfter performance review - Rating 4:" << endl;
    emp1.calculateSalaryByPerformance(4, 50000); 
    emp1.display();
    
    cout << "\nAfter performance review - Rating 5:" << endl;
    emp1.calculateSalaryByPerformance(5, 50000); 
    emp1.display();
    
    return 0;
}