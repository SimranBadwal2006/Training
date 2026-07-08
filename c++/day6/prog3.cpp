//  TEMPLATE
#include<bits/stdc++.h>
using namespace std;
template<typename T,typename U>
U add(T a,U b){
    return a+b;
}
int main(){
    cout<<add(3,5)<<endl;//integer
    cout<<add(3,5.5);//double
    return 0;
}