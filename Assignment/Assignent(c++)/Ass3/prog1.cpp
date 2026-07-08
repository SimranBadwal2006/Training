#include <iostream>
using namespace std;

class Area
{
public:
    int length;
    int width;

    // Parameterized constructor
   Area(int l, int w){
    length = l;
    width = w;
   }
  
    int area()
    {
        return length * width;
    }
};

int main(){
       Area  r1(10, 5);

    cout << "Length = " << r1.length << endl;
    cout << "Width = " << r1.width << endl;
    cout << "Area = " << r1.area() << endl;

    return 0;
}