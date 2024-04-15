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

void insertattail(node *&head, int item){
    node *new_node = new node(item);
    if(head == NULL){
        head = new_node;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(node *head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<NULL<<endl;
}

int length(node *head){
    int l=0;
    node *temp = head;
    while(temp!=NULL){
        l++;
        temp = temp -> next;
    }
    return l;
}

void appendknodes(node *&head , int k){
    int l=length(head);
    int count = 1;
    node *temp = head;
    node *new_tail;
    node *new_head;
    while(temp!=NULL){
        if(count == l-k){
            new_tail = temp;
        }
        if(count == l-k+1)
        new_head = temp;
        temp = temp -> next;
        count++;
    }
    temp -> next = head;
    new_tail -> next = NULL;
}

int main(){
 node *head = NULL;
 for (int i=1; i<11; i++)
 insertattail(head,i);
 appendknodes(head,3);
 display(head);
 return 0;
}