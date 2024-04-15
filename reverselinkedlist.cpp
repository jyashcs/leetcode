#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertattail(node *&head , int item){
    node *n = new node(item);
    if(head == NULL){
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
         temp = temp->next;
    }
    temp->next = n;
}

void display(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL";
}

void reverselist(node *&head){
    node *previous = NULL;
    node *current = head;
    node *link ;
    while(current != NULL){
        link = current->next;
        current->next = previous;
        previous = current;
        current = link;
    }
    head = previous;
}

int main(){
    node *head = NULL;
    for(int i=0; i<6; i++)
    insertattail(head,i);
    reverselist(head);
    display(head);
    return 0;
}