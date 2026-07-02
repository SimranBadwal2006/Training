#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
   
    Car() {
        company = "";
        model = "";
        year = 0;
    }
    
    Car(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    void setCompany(string c) {
        company = c;
    }
    
    void setModel(string m) {
        model = m;
    }
    
    void setYear(int y) {
        if(y > 1885) 
            year = y;
        else 
            cout << "Invalid year!" << endl;
    }

   
    string getCompany() {
        return company;
    }
    
    string getModel() {
        return model;
    }
    
    int getYear() {
        return year;
    }

    
    void display() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1;
    
    car1.setCompany("Toyota");
    car1.setModel("Camry");
    car1.setYear(2023);
    
    cout << "Car Details:" << endl;
    car1.display();
    
    cout << "\nUsing getters:" << endl;
    cout << "Company: " << car1.getCompany() << endl;
    
   
    Car car2("Honda", "Civic", 2024);
    cout << "\nSecond Car:" << endl;
    car2.display();
    
    return 0;
}