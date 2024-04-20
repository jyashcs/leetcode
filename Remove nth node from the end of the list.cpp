#include <iostream>
using namespace std;
class node {
public:
  int data;
  node *next;
  node(int val) {
    data = val;
    next = NULL;
  }
};

node *head = NULL;
node *tail = NULL;

void insertion(int item) {
  node *n = new node(item);
  if (head == NULL) {
    head = n;
    tail = n;
  } else {
    tail->next = n;
    tail = n;
  }
}

void reverselist() {
  node *previous = NULL;
  node *current = head;
  node *nextnode;
  while (current != NULL) {
    nextnode = current->next;
    current->next = previous;
    previous = current;
    current = nextnode;
  }
  head = previous;
  return;
}
void deleteatendpos() {
  int pos, count = 1;
  cout << "ENTER END POSITION YOU WANT TO DELETE " << endl;
  cin >> pos;
  node *temp = head;
  if (pos == 1) {
    node *todelete = head;
    head = head->next;
    delete todelete;
  } else {
    while (pos - 1 != count) {
      temp = temp->next;
      count++;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
  }
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
  int size;
  cout << "ENTER SIZE OF THE LINKED LIST" << endl;
  cin >> size;
  int n;
  cout << "ENTER LINKED LIST DATA" << endl;
  for (int i = 0; i < size; i++) {
    cin >> n;
    insertion(n);
  }
  display();
  reverselist();
  deleteatendpos();
  reverselist();
  display();
  return 0;
}