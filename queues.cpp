#include <iostream>
using namespace std;
#define size 5
int front = -1;
int rear = -1;
int queue[size];

void push()
{
    cout << "ENTER ELEMENT YOU WANT TO PUSH" << endl;
    int temp;
    cin >> temp;
    if (rear > size - 1)
    {
        cout << "QUEUE IS FULL" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = temp;
    }
    else
    {
        rear++;
        queue[rear] = temp;
    }
}

void pop()
{
    if (rear == -1 && front == -1)
    {
        cout << "QUEUE IS EMPTY" << endl;
    }
    else if (front == rear)
    {
        cout << "POPPED ITMEM = " << queue[rear] << endl;
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
        cout << "Queue is empty";
    else
    {
        cout << queue[front];
    }
    cout << endl;
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "QUEUE IS EMPTY" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
    }
    cout << endl;
}
int main()
{
    int choice;
    do
    {
        cout << "1.PUSH" << endl;
        cout << "2.POP" << endl;
        cout << "3.PEEK" << endl;
        cout << "4.DISPLAY" << endl;
        cout << "5.EXIT" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "INVALID CHOICE" << endl;
        }
    } while (choice != 5);
    return 0;
}