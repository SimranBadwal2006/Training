#include<bits/stdc++.h>
using namespace std;
class Car{
string company;
int model;
int year;

public:
void setCar(string c, int m, int y){
    company = c;
    model = m;
    year = y;
}
string getcompany(){
    return company;
}
int getmodel(){
    return model;
}
int getyear(){
    return year;
}
};

int main(){
Car c1;
c1.setCar("Honda", 23, 2023);

cout<<"Company: "<<c1.getcompany()<<endl;
cout<<"Model: "<<c1.getmodel()<<endl;
cout<<"Year: "<<c1.getyear()<<endl;
    return 0;
}