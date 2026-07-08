#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll;
    private:
    string add;

    public: 
    student(){
        cout<< "default constructor call.\n";
    }
    student (string n, int r, string a){
        name = n;
        roll = r;
        add = a;
    }
    //copy constructor
    student(student &obj){
        name = obj.name;
        roll = obj.roll;
        add = obj.add;
    }
    ~student(){
        cout<<"destructor call"<<endl;
    }
};
int main(){
    student s3;
    student s1("simran", 123, "RBPU");
    student s2(s1);
    // // s1.roll = 12;
    // cout<<"Name :" << s1.name <<endl;
    // cout<<"Roll :" << s1.roll <<endl;
    // cout<<"add: " << s1.add <<endl;
student *s4 = new student(); // allocation using new keyword
s4 ->name = "simran";
(*s4).roll = 122;

    delete s4;
    return 0;
}