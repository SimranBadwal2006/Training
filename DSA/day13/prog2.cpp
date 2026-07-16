//menu driven program of stack using class and object
#include<iostream>      
using namespace std;

class Stack {
private:
    int top;
    int arr[100];
public:
    Stack() {
        top = -1;
    }
    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            arr[top] = x;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            top--;
        }
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Elements in stack are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}; 
int main() {
    Stack s;
    int choice, value;
    do {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    return 0;
}