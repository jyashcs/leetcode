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
    {
        temp = temp->next;
    }
    temp->next = new_node;
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

void makecycle(node *head, int pos)
{
    int count = 1;
    node *temp = head;
    node *startnode;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = startnode;
}

bool detectcycle(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void deletecycle(node *head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (slow != fast);

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    for (int i = 1; i < 7; i++)
    {
        insertattail(head, i);
    }
    display(head);
    makecycle(head, 4);
    cout << detectcycle(head) << endl;
    deletecycle(head);
    cout << detectcycle(head) << endl;
    display(head);
    return 0;
}