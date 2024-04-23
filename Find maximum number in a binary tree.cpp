#include <cstddef>
#include <iostream>
using namespace std;
class node {
public:
  int data;
  node *right;
  node *left;
  node(int val) {
    data = val;
    right = NULL;
    left = NULL;
  }
};

void preorderedtraversal(node *root , int max) {
  if (root == NULL) {
    return;
  }
  max = root->data > max ? root->data : max;
  preorderedtraversal(root->left,max);
  preorderedtraversal(root->right,max);
}
int main() {
  node *root = new node(1);

  root->right = new node(2);
  root->left = new node(3);

  root->left->left = new node(4);
  root->left->right = new node(5);

  root->right->left = new node(6);
  root->right->right = new node(7);
   
  int max = 0;
  preorderedtraversal(root,max);
  cout<<max;

  return 0;
}