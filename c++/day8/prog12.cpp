#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, string> m;
    m.insert({1,"Simran"});
    m[2] = "Simmu";
    // m.insert(make_pair(1, "Simranjeet"));
    m.insert({4, "Prabh"});
    m.insert({3, "Simranjeet"});

    for(auto ele : m){
        cout<<ele. first << " : "<<ele.second <<endl;
    }
    return 0;
}