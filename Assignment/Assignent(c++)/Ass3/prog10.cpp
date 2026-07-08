#include<iostream>
#include<string>
using namespace std;

class Programming{
public:
    
    Programming(){
        cout << "I love programming languages" << endl;
    }

  
    Programming(string lang){
        cout << "I love " << lang << endl;
    }
};

int main(){
    Programming p1; 
    Programming p2("cpp"); 
    Programming p3("Java"); 

    return 0;
}