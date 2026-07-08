#include<iostream>
#include<string>  
using namespace std;

class Employee{
public:
    int id;
    string name;
    float salary;

    
    Employee(int i, string n, float s){
        id = i;
        name = n;
        salary = s;
    }
void Display(){
    cout<<"id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"salary:"<<salary<<endl;
}
};

int main(){
Employee e1(12, "simran", 11000.5);
Employee e2(13, "prabh", 15000);

cout<<"Employee 1 Details: "<<endl;
e1.Display();

cout<<"Employee 2 Details: "<<endl;
e2.Display();

return 0;

}