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
node *tail = NULL;
void insertattail(int item)
{
    node *new_node = new node(item);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = tail->next;
}

void rotatenodes(int k)
{
    int count = 1;
    while (count <= k)
    {
        tail->next = head;
        head = head->next;
        tail = tail->next;
        count++;
    }
    tail->next = NULL;
}

void display()
{
    if (head == NULL)
    {
        cout << "LIST IS EMPTY" << endl;
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
    for (int i = 1; i <= 6; i++)
        insertattail(i * 10);
    display();
    cout << "HOW MANY NODES TO ROTATE ??" << endl;
    int k;
    cin >> k;
    rotatenodes(k);
    display();
    return 0;
}