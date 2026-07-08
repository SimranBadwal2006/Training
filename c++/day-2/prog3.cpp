#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    // Parameterized constructor
   Rectangle(int l, int w){
    lenght = l;
    width = w;
   }
  
    int area()
    {
        return length * width;
    }
};

int main(){
       Rectangle r1(10, 5);

    cout << "Length = " << r1.length << endl;
    cout << "Width = " << r1.width << endl;
    cout << "Area = " << r1.area() << endl;

    return 0;
}