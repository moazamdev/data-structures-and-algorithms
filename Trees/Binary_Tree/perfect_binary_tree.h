#ifndef pbt
#define pbt

#include <iostream>
#include "class_node.h"
using namespace std;

int depth(Node *node) {
  int d = 0;
  while (node != NULL) {
    d++;
    node = node->left;
  }
  return d;
}

bool isPerfectR(Node *root, int d, int level = 0) {
  if (root == NULL)
    return true;

  if (root->left == NULL && root->right == NULL)
    return (d == level + 1);

  if (root->left == NULL || root->right == NULL)
    return false;

  return isPerfectR(root->left, d, level + 1) &&
       isPerfectR(root->right, d, level + 1);
}

bool isPerfect(Node *root) {
  int d = depth(root);
  return isPerfectR(root, d);
}

#endif