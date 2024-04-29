#include <iostream>
using namespace std;
int top = -1;
#define size 5
int stack[size];
void push()
{
    int item;
    cout << "ENTER THE ITEM TO BE INSERTED" << endl;
    cin >> item;
    if (top == size)
        cout << "STACK IS FULL (OVERFLOW)" << endl;
    else
    {
        top++;
        stack[top] = item;
    }
}

void pop()
{
    int temp;
    if (top == -1)
        cout << "STACK IS EMPTY (UNDERFLOW)" << endl;
    else
    {
        temp = stack[top];
        cout << "DELETED ITEM IS : " << temp << endl;
        top--;
    }
}

void peek()
{
    if (top == -1)
        cout << "STACK IS EMPTY" << endl;
    else
        cout << "THE TOP MOST ELEMENT IS : " << stack[top] << endl;
}

void display()
{
    if (top == -1)
        cout << "STACK IS EMPTY (UNDERFLOW) " << endl;
    else
        for (int i = top; i >= 0; i--)
            cout << stack[i];
            
          cout<<endl;
}

int main()
{
    int choice;
    do
    {
        cout << "ENTER 1 TO PUSH \nENTER 2 TO POP \nENTER 3 TO PEEK \nENTER 4 TO DISPLAY \nENTER 0 TO EXIT" << endl;
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
        default:
            cout << "SORRY, YOU HAVE ENTERED A WRONG CHOICE" << endl;
        }
    } while (choice != 0);
    return 0;
}