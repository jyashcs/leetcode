#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *previous;
    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};

void insertathead(node *&head, int item)
{
    node *new_node = new node(item);
    new_node->next = head;
    if (head != NULL)
    {
        head->previous = new_node;
    }
    head = new_node;
}

void insertattail(node *&head, int item)
{
    node *new_node = new node(item);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->previous = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    for (int i = 1; i < 11; i++)
        insertattail(head, i);
    display(head);
    return 0;
}