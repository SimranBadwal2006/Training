#include<iostream>
using namespace std;

class Cube{
private:
    int side;

public:
    Cube(int s){
        side = s;
    }

    void volume(){
        cout << "Volume of Cube: " << side * side * side << endl;
    }
};

int main(){
    Cube c1(5); 
    c1.volume(); 
    
    return 0;
}