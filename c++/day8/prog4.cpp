#include<bits/stdc++.h>
using namespace std;

int main(){

     vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(11);
    a.push_back(60);
    a.push_back(40);

    vector<int>:: iterator it;
    for(it = a.begin(); it != a.end(); it++){
        cout<< *it <<" ";
    }
    
    return 0;
}