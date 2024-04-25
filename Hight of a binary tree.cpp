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

int Height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = Height(root->left);
    int rh = Height(root->right);

    return max(lh, rh) + 1;
}

int main()
{
    node *root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->right = new node(6);
    root->right->left = new node(7);
    
    cout << Height(root);
    return 0;
}