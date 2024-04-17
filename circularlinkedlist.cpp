#include <iostream>
using namespace std;
class node {
public:
  int data;
  node *next;
  node *previous;
  node(int val) {
    data = val;
    next = NULL;
    previous = NULL;
  }
};

node *head = NULL;
node *tail = NULL;

void insertattail(int item) {
  node *new_node = new node(item);
  if (head == NULL) {
    head = new_node;
    tail = new_node;
    return;
  }
  tail->next = new_node;
  tail = new_node;
}

void makecircle() {
  head->previous = tail;
  tail->next = head;
}

void deletecircle() {
  head->previous = NULL;
  tail->next = NULL;
}

void display() {
  node *temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {
  for (int i = 1; i < 11; i++) {
    insertattail(i);
  }
  makecircle();
  deletecircle();
  display();
  return 0;
}