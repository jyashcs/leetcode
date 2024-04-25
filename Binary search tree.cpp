#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
node *Buildtree(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = Buildtree(root->left, val);
    }
    else
    {
        root->right = Buildtree(root->right, val);
    }

    return root;
}

void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
int main()
{
    node *root = NULL;
    root = Buildtree(root, 5);
    Buildtree(root, 1);
    Buildtree(root, 7);
    Buildtree(root, 4);
    Buildtree(root, 2);
    Buildtree(root, 3);
    Buildtree(root, 6);

    Inorder(root);
    return 0;
}