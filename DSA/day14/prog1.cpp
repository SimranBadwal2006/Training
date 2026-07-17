// Implementation of Stack using Linked List
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {                                                 
private:
    Node* top;

public:
    // Constructor
    Stack() {
        top = NULL;
    }

    // Push operation
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed into stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow!" << endl;
            return;
        }

        Node* temp = top;
        cout << top->data << " popped from stack." << endl;
        top = top->next;
        delete temp;
    }

    // Peek operation
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Display stack
    void display() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements are: ";
        Node* temp = top;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
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
                if (!s.isEmpty())
                    cout << "Top element is: " << s.peek() << endl;
                else
                    cout << "Stack is empty." << endl;
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}