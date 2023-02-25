#ifndef def
#define def

#include <iostream>
#include "class_node.h"
using namespace std;

bool isFullBT(Node *root)
{
    if (root == NULL)
        return true;

    if ((root->left == NULL) && (root->right == NULL))
        return true;

    if ((root->left) && (root->right))
        return (isFullBT(root->left) && isFullBT(root->right));

    return false;
}

#endif