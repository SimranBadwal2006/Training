#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> us;
    us.insert(20);
    us.insert(2);
    us.insert(6);
    us.insert(26);

    for(auto ele: us){
        cout<< ele<< " ";
    }
    if(us.find(30) != us.end()){
        cout<< "Ha hai";
    }
    else{
        cout<<"Nhi hai";
    }
    return 0;
}