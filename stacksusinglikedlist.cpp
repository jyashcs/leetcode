#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *head = NULL;
void push(int val)
{
    node *new_node = new node(val);
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

void pop()
{
   node *todelete = head;
   head = head -> next;
   delete todelete;
}

void peek()
{
    cout << head->data;
}

void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    for (int i = 0; i < 10; i++)
        push(i);
    display();

    return 0;
}