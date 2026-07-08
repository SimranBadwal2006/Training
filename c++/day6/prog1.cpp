#include<iostream>
using namespace std;

class shape{
public:
    virtual void area() = 0; 
};

class circle: public shape{
public:
    float radius;
    
    circle(){ radius = 0; } 
    circle(float r){ radius = r; } 

    void area(){ 
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public shape{
public:
    int len;
    int width;

    Rectangle(){ len = 0; width = 0; } 
    Rectangle(int l, int w){ len = l; width = w; } 

    void area(){ 
        cout << "Area of rectangle: " << len * width << endl;
    }
};

int main(){
    circle c1(5.5);       
    Rectangle r1(3, 5); 
    
    shape *p; 

    p = &c1;  
    p->area(); 

    p = &r1;   
    p->area(); 

    return 0;
}