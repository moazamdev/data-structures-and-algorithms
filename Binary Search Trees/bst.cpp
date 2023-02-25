#include <iostream>
using namespace std;
struct bstNode
{
    int data;
    bstNode *left;
    bstNode *right;
};
bstNode *getNewNode(bstNode *&root, int data)
{
    bstNode *newNode = new bstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
bstNode *insert(bstNode *&root, int data)
{
    if (root == NULL)
    {
        root = getNewNode(root, data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}
// search function
bool search(bstNode *root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}
void print(bstNode *root)
{
    bstNode *temp = root;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->data << "->";
    print(temp->left);
    print(temp->right);
}
int main()
{
    bstNode *root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    int target = 25;
    if (search(root, target)) cout << "found\n";
    else cout << "not found\n";
    print(root);
    return 0;
}