// Binary Tree and traversal (preorder, inorder, postorder)
#include <iostream>
#include "class_node.h"
using namespace std;
void preorder(Node *root)
{
    if (root == NULL)
        return;
    if (root->data == -1)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    if (root->data == -1)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    if (root->data == -1)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
