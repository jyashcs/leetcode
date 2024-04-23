#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *left;
  node *right;
  node(int val) {
    data = val;
    left = NULL;
    right = NULL;
  }
};

int search(int preorder[], int inorder[], int start, int end, int current) {
  for (int i = start; i <= end; i++) {
    if (inorder[i] == current) {
      return i;
    }
  }
  return -1;
}

void printinorder(node *root) {
  if (root == NULL) {
    return;
  }
  printinorder(root->left);
  cout << root->data << " ";
  printinorder(root->right);
}

node *buildtree(int preorder[], int inorder[], int start, int end) {

  if (start > end) {
    return NULL;
  }
  static int index = 0;
  int current = preorder[index];
  index++;
  node *newnode = new node(current);
  if (start == end) {
    return newnode;
  }
  int pos = search(preorder, inorder, start, end, current);
  newnode->left = buildtree(preorder, inorder, start, pos - 1);
  newnode->right = buildtree(preorder, inorder, pos + 1, end);

  return newnode;
}
int main() {
  int preorder[] = {1, 2, 4, 3, 5};
  int inorder[] = {4, 2, 1, 5, 3};

  node *root = buildtree(preorder, inorder, 0, 4);
  printinorder(root);
  return 0;
}