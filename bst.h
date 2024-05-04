#pragma once

struct Node {
    int key;
    struct Node* left, * right;
};

class BST
{
public:
 // Node* newNode(int item);
  BST();
  void inorder(Node* root);

private:

};
