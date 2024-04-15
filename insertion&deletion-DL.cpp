#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next = NULL;
    node *previous = NULL;
    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
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
    new_node->previous = temp;
}

void inseratreqpos(node *&head, int item, int pos)
{
    node *new_node = new node(item);
    if (pos == 1)
    {
        head = new_node;
        return;
    }
    int count = 1;
    node *temp = head;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    new_node->previous = temp;
    temp->next = new_node;
    new_node->next->previous = new_node;
}

void deleteatreqpos(node *&head , int pos){
     if(pos == 1){
        node *todelete = head;
        head = NULL;
        delete head;
     }
     int count = 1;
     node *temp = head;
     while(count != pos -1){
            temp = temp -> next;
     }
     node *todelete = temp -> next;
     temp -> next = temp -> next -> next;
     temp -> next -> next -> previous = temp;
     delete todelete;
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
    inseratreqpos(head, 5, 5);
    display(head);
    deleteatreqpos(head,5);
    display(head);
    return 0;
}