#include<iostream>
#include<string>
using namespace std;

class Mobile{
private:
    string brand;
    double price;
    string color;

public:
 
    void input(){
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Color: ";
        cin >> color;
    }

   
    double getPrice(){
        return price;
    }
    void showDetails(){
        cout << "Brand: " << brand << " Price: " << price << " Color: " << color << endl;
    }
};

int main(){
    Mobile m[5]; 
    int count = 0;

    cout << "Enter details of 5 Mobiles:\n" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Mobile " << i+1 << endl;
        m[i].input();
        cout << endl;
    }

   
    for(int i = 0; i < 5; i++){
        if(m[i].getPrice() > 5000)
            count++;
    }
    cout << "Total mobiles with price > 5000: " << count << endl << endl;

   
    cout << "Mobiles with price range 1000 to 10000:" << endl;
    for(int i = 0; i < 5; i++){
        if(m[i].getPrice() >= 1000 && m[i].getPrice() <= 10000)
            m[i].showDetails();
    }

    return 0;
}