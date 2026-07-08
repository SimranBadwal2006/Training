//list
#include<iostream>
#include<list>
#include<forward_list>
using namespace std;


int main(){
list<int> ls;

ls.push_back(2);
ls.push_front(3);
ls.push_back(4);
ls.push_front(7);
ls.pop_back();

for(int ele : ls)
cout<<ele<<" ";

forward_list<int> fl;
forward_list<int> gl;
fl.push_front(20);
fl.push_front(40);
fl.push_front(50);
fl.pop_front();
for(int ele : fl)
cout<<endl<<ele<<" ";
    return 0;
}