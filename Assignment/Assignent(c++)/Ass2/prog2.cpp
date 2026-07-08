#include<bits/stdc++.h>
using namespace std;
class Circle{
double radius;

public:
void setradius(double r){
    radius = r;
}
double getArea(){
    return 3.14 * radius * radius;
}
double getCircumference(){
    return 2 * 3.14 * radius;
}
};


int main(){
Circle c1;
c1.setradius(5);
cout<<"Area:"<<c1.getArea()<<endl;
cout<<"Circumference:"<<c1.getCircumference()<<endl;
    return 0;
}