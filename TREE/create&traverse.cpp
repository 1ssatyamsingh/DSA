#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left, *right;

  Node(int value)
  {
    data = value;
    left = right = NULL;
  }
};

void PreOrder(Node *root)
{
  if (root == NULL)
    return;
  cout << root->data << " "; // n
  PreOrder(root->left);      // l
  PreOrder(root->right);     // r
}

void InOrder(Node *root)
{
  if (root == NULL)
    return;
  InOrder(root->left);       // l
  cout << root->data << " "; // n
  InOrder(root->right);      // r
}

void PostOrder(Node *root)
{
  if (root == NULL)
    return;
  PostOrder(root->left);     // l
  PostOrder(root->right);    // r
  cout << root->data << " "; // n
}

Node *BinaryTree()
{
  int x;
  cin >> x;
  if (x == -1)
    return NULL;
  Node *temp = new Node(x);
  cout << "enter left child of " << x << " : ";
  temp->left = BinaryTree();
  cout << "enter right child of " << x << " : ";
  temp->right = BinaryTree();
  return temp;
}

int main()
{
  cout << "enter root element: ";
  Node *root = BinaryTree();
  PreOrder(root);
  cout << endl;
  InOrder(root);
  cout << endl;
  PostOrder(root);
}

/*
          1
      2       6
    3   5   4   7
*/