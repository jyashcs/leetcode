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
        temp = temp->next;
    temp->next = new_node;
}
node *reverseknodes(node *head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {
        head->next = reverseknodes(nextptr, k);
    }

    return prevptr;
}

void display(node *head)
{
    if (head == NULL)
    {
        cout << "LINKED LIST IS EMPTY" << endl;
        return;
    }
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
    for (int i = 1; i < 7; i++)
        insertattail(head, i);
    display(head);
    int k = 2;
    node *new_head = reverseknodes(head, k);
    display(new_head);
    return 0;
}