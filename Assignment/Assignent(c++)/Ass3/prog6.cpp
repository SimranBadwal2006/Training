#include<iostream>
#include<string>
using namespace std;

class Mobile{
private:
    string brand;
    double price;
    string color;
    double width;  
    double height; 

public:
    Mobile(){
        brand = "Samsung";
        price = 19999.0;
        color = "Black";
        width = 7.2;
        height = 15.5;
    }

    void display(){
        cout << "Brand  : " << brand << endl;
        cout << "Price  : Rs " << price << endl;
        cout << "Color  : " << color << endl;
        cout << "Width  : " << width << " cm" << endl;
        cout << "Height : " << height << " cm" << endl;
    }
};

int main(){
    Mobile m1; 
    cout << "Mobile Details:" << endl;
    m1.display();

    return 0;
}