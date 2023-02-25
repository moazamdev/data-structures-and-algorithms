#include <iostream>
#include "class_node.h"
using namespace std;
void insert(Node *&root)
{
    int data;
    cout << "Enter Data: ";
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        root = NULL;
        return;
    }

    cout << "Enter data in left of " << data << endl;
    insert(root->left);
    cout << "Enter data in right of " << data << endl;
    insert(root->right);
}