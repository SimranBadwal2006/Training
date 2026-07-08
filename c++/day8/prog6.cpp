#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int>a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(10);
    a.push_back(60);
    a.push_back(40);

    // Constant iterator
    vector<int>::const_iterator it; 
    for(it = a.begin(); it != a.end(); it++){
        if(*it==20){
            cout << distance(a.cbegin(), it); // yaha cbegin() lagaya
            //distance give difference between starting and end pointer
            cout << endl;
        }
    }

    // ye line hata di kyunki it pehle hi bana hua hai
    for(auto it2 = a.begin(); it2 != a.end(); it2++){
        cout << *it2 << " ";
    }

    return 0;
}