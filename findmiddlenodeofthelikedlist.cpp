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
int pos()
{
    node *temp = head;
    int pos = 0;
    while (temp != NULL)
    {
        pos++;
        temp = temp->next;
    }
    return pos;
}

void insertion(int item)
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
}

void middlepos()
{
    int count = 0;
    node *temp = head;
    int position = pos();
    while (count != position)
    {
        temp = temp->next;
    }
    cout << temp->data;
}

int mian()
{
    for (int i = 1; i < 6; i++)
        insertion(i);
    middlepos();
    return 0;
}