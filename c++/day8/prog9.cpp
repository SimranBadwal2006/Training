//Queue
#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> *q = new queue<int>();//pointer to object
    q->push(20);//add element to the back
    q->push(30);
    q->push(40);

    cout<<"Front element: " <<q->front()<<endl;
    cout<<"Last element: " <<q->back()<<endl;

    cout<<"Queue elements: ";
    while(!q->empty()){
        cout<<q->front()<<" ";
        q->pop();
    }
    return 0;
}