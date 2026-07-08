#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(2);
    s.insert(35);
    s.insert(20);

    for(auto ele : s){
        cout<<ele<<" ";
    }
cout<<endl;
    if(s.find(20) != s.end()){
        cout<<*s.find(20) <<endl;
    }
    return 0;
}