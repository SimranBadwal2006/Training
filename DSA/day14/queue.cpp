#include <iostream>
#include <cstdlib>      // For exit()
#define size 5
using namespace std;

class Queue
{
    int arr[size];
    int front, rear;

public:
    // Constructor
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Enqueue Operation
    void enqueue()
    {
        int val;
        cout << "Enter value: ";
        cin >> val;

        if (rear == size - 1)
        {
            cout << "Queue is Full..." << endl;
            return;
        }

        if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = val;
        cout << "Element Enqueued Successfully..." << endl;
    }

    // Dequeue Operation
    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty..." << endl;
            return;
        }

        cout << "Deleted Element: " << arr[front] << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    // Display Queue
    void display()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty..." << endl;
            return;
        }

        cout << "Queue Elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Peek Operation
    void peek()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty..." << endl;
            return;
        }

        cout << "Front Element: " << arr[front] << endl;
    }

    // Exit Program
    void Exit()
    {
        cout << "Exiting Program..." << endl;
        exit(0);
    }
};

int main()
{
    Queue q;
    int choice;

    while (true)
    {
        cout << "\n===== Queue Menu =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.enqueue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            q.peek();
            break;

        case 5:
            q.Exit();
            break;

        default:
            cout << "Invalid Choice! Please try again." << endl;
        }
    }

    return 0;
}