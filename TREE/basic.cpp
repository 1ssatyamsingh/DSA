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

int main()
{
  int x; // root element
  cout << "enter root element: ";
  cin >> x;
  int first, second; // element to store in left and right
  queue<Node *> q;
  Node *root = new Node(x);
  q.push(root);
  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();
    cout << "enter left child of " << temp->data << " : ";
    cin >> first;
    if (first != -1)
    {
      temp->left = new Node(first);
      q.push(temp->left);
    }
    cout << "enter right child of " << temp->data << " : ";
    cin >> second;
    if (second != -1)
    {
      temp->right = new Node(second);
      q.push(temp->right);
    }
  }
}

/*
      1
    2   3
   4 5
      6
*/