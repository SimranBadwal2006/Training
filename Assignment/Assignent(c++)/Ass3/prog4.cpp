#include<iostream>
using namespace std;

class Box{
private:
    int l, b, h;

public:
   
    Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }

    void area(){
        int area = 2 * (l*b + b*h + h*l);
        cout << "Total Surface Area of Box: " << area << endl;
    }
};

int main(){
    Box b1(2, 3, 4); 
    b1.area(); 
    
    return 0;
}