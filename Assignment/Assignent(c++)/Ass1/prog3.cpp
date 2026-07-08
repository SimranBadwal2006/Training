#include<iostream>
using namespace std;
class Circle{
public:
float radius;

Circle(float r){
    radius = r;
}
float area(){
    return 3.14 * radius * radius;
}

};

int main(){
Circle c1(4.5);
cout<<"Area is:"<<c1.area()<<endl;
return 0;
}