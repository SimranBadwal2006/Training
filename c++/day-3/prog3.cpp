#include<iostream>
using namespace std;

class A{
    public:
    string name;
    int rollno;
    static string collegeName; 
};

private:
A(){
    cout<<"Default constructor"<<endl;
}
public:
static A fun(){
    A obj;
    return obj;
}
string A::collegeName; 

int main(){
    A s1=A::fun();
    s1.name = "Simran";
    s1.rollno = 123;
    A::collegeName = "RBPU";  
    
    cout << "Name: " << s1.name << endl;
    cout << "Rollno: " << s1.rollno << endl;
    cout << "College Name: " << s1.collegeName << endl;
    
   
    return 0;
}