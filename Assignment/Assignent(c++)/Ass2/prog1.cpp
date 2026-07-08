#include<iostream>
using namespace std;

class Student{
public:
    int rollNo;
    string name;
};

int main(){
    Student s1;  

    s1.rollNo = 603;      
    s1.name = "Simran"; 

    cout <<"Name: " << s1.name<<endl;  
    cout <<"Rollno: " << s1.rollNo;  

    return 0;
}