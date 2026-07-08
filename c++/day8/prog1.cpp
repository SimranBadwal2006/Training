#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(11);
    a.push_back(60);
    a.push_back(40);

    cout<<"Front element: "<<a.front()<<endl;;
    // cout<<"Last element: "<<(*a.end()-1)<<endl;
    cout<<"Last element: "<<a.back()<<endl;

    for(int ele : a){
        cout<<ele<<" ";
    }
    sort(a.begin(), a.end(), greater<>());
    cout<<endl<<"sorted vector: ";
    for(int ele : a){
        cout<<ele<<" ";
    }
    return 0;
}
