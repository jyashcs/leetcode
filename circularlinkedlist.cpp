#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *previous;
    node(int val){
      data = val;
      next = NULL;
      previous = NULL;
    }
};

node *head = NULL;

void insertattail(int item){
    node *new_node = new node(item);
    if(head == NULL){
        head = new_node;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp-> next;
    }
    temp -> next = new_node;
}

void makecircle(){
    node *temp = head;
    while(temp->next != NULL){
        temp = temp-> next;
    }
    temp -> next = head;
    head -> previous = temp;
}

void deletelastnodecir(){
      head -> previous -> previous -> next = head;
      head -> previous = head -> previous -> previous;
      head -> previous = 
}
void makecycle(int pos){
    int count = 1;
    node *temp = head;
    node *startnode;
    while(temp->next != NULL){
        if(count == pos){
           startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp -> next = startnode;
}

void deletelastnode(){
   
}

void display(){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";\
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    for(int i=1; i<11; i++)
    insertattail(i);
    display();
    deletelastnodecir();
    display();
    return 0;
}