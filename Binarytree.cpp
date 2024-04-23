//  Binary tree and preorder,inorder,postorder traversals.

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

void preordertraversal(node *root) {
  if (root == NULL) {
    return;
  }
  cout << root->data << " ";
  preordertraversal(root->left);
  preordertraversal(root->right);
}

void inordertraversal(node *root) {
  if (root == NULL) {
    return;
  }
  inordertraversal(root->left);
  cout << root->data << " ";
  inordertraversal(root->right);
}

void postordertraversal(node *root) {
  if (root == NULL) {
    return;
  }
  postordertraversal(root->left);
  postordertraversal(root->right);
  cout << root->data << " ";
}

int main() {

   /*           1
              /   \
             2     3
            / \   / \
           4   5  6  7  */

  node *root = new node(1);
  root->left = new node(2);
  root->right = new node(3);

  root->left->left = new node(4);
  root->left->right = new node(5);

  root->right->left = new node(6);
  root->right->right = new node(7);

  preordertraversal(root);
  cout << endl;
  inordertraversal(root);
  cout << endl;
  postordertraversal(root);
  return 0;
}