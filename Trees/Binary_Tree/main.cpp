#include <iostream>
#include "full_binary_tree.h"
#include "class_node.h"
#include "insert_node.h"
#include "tree_traversal.h"
#include "full_binary_tree.h"
#include "perfect_binary_tree.h"
using namespace std;
int main()
{
    cout << endl
         << endl;

    Node *root = NULL;
    insert(root);

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    isFullBT(root) ? cout << "Tree is a FBT" << endl : cout << "Tree is not a FBT" << endl;
    
    isPerfect(root) ? cout << "Tree is a PBT" << endl : cout << "Tree is not a PBT" << endl;

    cout << endl
         << endl;
    return 0;
}