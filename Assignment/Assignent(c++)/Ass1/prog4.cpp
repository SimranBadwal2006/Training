#include<iostream>
#include<string>
using namespace std;
class Book{
public:
int bookid;
string title;
float price;

Book(){
bookid = 0;
title = "no title";
price = 0.0;
}

void display(){
    cout<<"BookId: "<<bookid<<endl;
     cout<<"Title:  "<<title<<endl;
      cout<<"Price: "<<price<<endl;
}

};

int main(){
Book b1;

  b1.bookid = 101;
    b1.title = "C++ Programming";
    b1.price = 550.0f;

    b1.display();
    return 0;
}