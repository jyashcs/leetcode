#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node (int val){
        data = val;
        next = NULL;
    }
};
node *head = NULL;
node *tail = NULL;
node *todelete;
void insertattail(int item){
    node *newnode = new node(item);
    if(head == NULL){
        head = newnode;
        tail = NULL;
        return;
    }
    tail -> next = newnode;
    tail = newnode;
}

void deleteatendpos(int pos){
    node *temp = head;
    int count = 1;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    if(count == pos){
        todelete = head;
        head = head -> next;
        delete todelete;
        return;
    }
    int traverse=1;
    temp = head;
    while(traverse != count - pos){
        temp = temp -> next;
        traverse++;
    }
    todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
    return;
}

void display(){
    node *temp = head;
    while(temp != NULL){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
int main() {
   for(int i=1; i<11; i++){
    insertattail(i);
   }
   display();
   deleteatendpos(2);
   display();
  return 0;
}