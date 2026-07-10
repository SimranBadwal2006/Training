#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node *next;
node(){
    data = 0;
    next = NULL;
}
node(int val){
    data = val;
    next = NULL;
}
};
class linkedlist{
 node *start = NULL;
 public:
void insert(){
    int ch;
    char choice2 = 'y';
    do{
cout<<"\n 1. Insert at Begin."<<endl;
cout<<"\n 2. Insert at End."<<endl;
cout<<"\n 3. Exit."<<endl;
cout<<"Enter your choice.";
cin>>ch;
switch(ch){
    case 1: at_begin();
    break;
    case 2: at_end();
    break;
    case 3: choice2 = 'n';
    break;
    default: cout<<"Invalid choice!!";
    break;

}
    }
    while(choice2=='y');
}
void display(){
node *temp = start;
cout<<"List."<<endl;
while(temp!= NULL){
    if(start==NULL){
        cout<<"List is empty!!"<<endl;
        return;
    }

    else{
    cout<<temp->data<<"->";
    temp = temp->next;
    }
}
}
void at_begin(){
    int num;
    cout<<"Enter number:";
    cin>>num;
node *ptr = new node(num);
if(start == NULL){
    start = ptr;
}
else{
    ptr->next = start;
    start = ptr;
    cout<<"Node inserted!!"<<endl;
}
}
void at_end(){
int val;
cout<<"enter number:";
cin>>val;
node *ptr = new node(val);
node *temp = start;
while(temp->next!=NULL){
    temp = temp->next;
}
temp->next = ptr;
cout<<"Node Inserted at End"<<endl;
}
};
int main(){
    linkedlist l1;
int ch;
char choice = 'y';
system("cls");
do{
    cout<<"\n Linked list project"<<endl;
    cout<<"\n 1. Insert."<<endl;
    cout<<"\n 2. Display"<<endl;
    cout<<"\n 3. Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch){
        case 1: l1.insert();
        break;
        case 2: l1.display();
        break;
        case 3: choice = 'n';
        break;
        default: cout<<"Invalid choice!!"<<endl;
        break;
    }

}
while(choice == 'y');
    return 0;
}