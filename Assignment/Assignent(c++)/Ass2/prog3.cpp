#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle(int l, int w){
        length = l; 
        width = w;
    }
  
    int area() { 
        return length * width;
     }

    int perimeter() {
         return 2 * (length + width);
         }

    int getLength() {
         return length;
         }

    int getWidth() {
         return width; 
        }
};

int main(){
    Rectangle r1(10, 5);
    cout << "Length = " << r1.getLength() << endl;
    cout << "Width = " << r1.getWidth() << endl;
    cout << "Area = " << r1.area() << endl;
    cout << "Perimeter = " << r1.perimeter() << endl;
    return 0;
}