#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};

 node *head = NULL;
 node *tail = NULL;
  
  void push(int item){
    node *new_node  = new node(item);
    if(head == NULL){
        head = new_node;
        tail = new_node;
    }else{
        tail->next = new_node;
        tail = new_node;
    }
  }

  void pop(){
    node *todelete = head;
    head = head -> next;
    delete todelete;
  }

  void display(){
    node *temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
  }

  void peek(){
    cout<<head->data<<endl;
  }

  int main(){
    for(int i=1; i<11; i++)
    push(i);
    pop();
    pop();
    peek();
    display();
    return 0;
  }