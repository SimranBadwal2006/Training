#include<iostream>
#include<string> 
using namespace std;

class Book{
    public:
    int bookid;
    string title;
    int price;

    // Default constructor
    Book(){
        
    }
    
    Book(int id, string t, int p){
        bookid = id;
        title = t;
        price = p;
    }
};

int main(){
  Book b1(12, "DSA", 120);  
  cout<<"Bookid: "<< b1.bookid<<endl;
  cout<<"Title: "<< b1.title<<endl;  
  cout<<"Price: "<< b1.price<<endl; 
  return 0;
}